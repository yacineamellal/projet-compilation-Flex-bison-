%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "TS.h"
#include "RS.h"
#include "Quad.h"


int yylex();
extern FILE* yyin;
extern int line;
extern int colo;
int yyerror(char *);
int m=0,n=0;
int indq=0;
char* tab_char [10];
int i=0;int j=0;
int nTemp=1; char tempC[12]=""; 
char temp_branchement_if[10][10];
char tmp[20];
char tmp2[20];
char sauvOpr[20];
int yyparse();

%}

%union {char* nom; struct {char* type;char* res;}NT;}

%token mc_var_global mc_declaration mc_instruction accolade_ouv accolade_ferm <nom>mc_integer mc_float mc_const mc_if mc_else mc_for mc_read mc_write mc_while mc_struct crocher_ouv crocher_ferm aff diff msg
%token egale par_ouvr par_ferm add sub division mul pvg vg pt dpt and or not inf sup inf_egale sup_egale

%nonassoc not
%left or
%left and
%left sup_egale sup inf egale diff inf_egale
%left add sub
%left mul division

%type<NT> expressionAr

%token <nom>idf reel entier

%start program
%%

program: mc_var_global accolade_ouv DEC accolade_ferm mc_declaration accolade_ouv DEC accolade_ferm mc_instruction accolade_ouv list_inst accolade_ferm{
    printf("\n\n\t\tProgramme syntaxiquement correcte \n\n");
    YYACCEPT;
}
;
/***************************la partie déclaration variables********************************************************************/
DEC: simpleDEC DEC
	|TabDEC DEC
	|ConstDEC DEC
	|
	;

//variable simple int / float 
simpleDEC:mc_integer LISTVARINT pvg   
		|mc_float LISTVARFLOAT pvg 
		;

//déclaration tableau
TabDEC:mc_integer idf crocher_ouv entier crocher_ferm pvg    
					 {doubleDec ($2);inserer($2,"INTEGER");quad("BOUNDS","1",$4,""); quad("ADEC",$2,"","");}
		|mc_float idf crocher_ouv entier crocher_ferm pvg    
					 {doubleDec ($2);inserer ($2,"FLOAT");quad("BOUNDS","1",$4,""); quad("ADEC",$2,"","");}

		;

//déclaration constant
ConstDEC:mc_const idf pvg                {doubleDec ($2);inserer ($2,"constant");}
		|mc_const idf aff entier pvg     {doubleDec ($2);inserer ($2,"constant");}
		|mc_const idf aff reel pvg       {doubleDec ($2);inserer ($2,"constant");}
		;
//liste des entiers
LISTVARINT: idf 		{doubleDec ($1);inserer ($1,"INTEGER");}
|idf vg  LISTVARINT	{doubleDec ($1);inserer ($1,"INTEGER");}
;
//liste des floats
LISTVARFLOAT: idf 		{doubleDec ($1);inserer ($1,"FLOAT");}
|idf vg  LISTVARFLOAT	{doubleDec ($1);inserer ($1,"FLOAT");}
;

//********************************************************************************************************

//******************************** partie instructions ***************************************************
list_inst : INST list_inst 
            |
            ;
INST :affectation 
	|CONDITION 
	|BOUCLEFOR 
	|BOUCLEWHILE 
    |READ
    |WRITE
	;

//partie affectation
affectation:idf aff expressionAr pvg 
					{dec ($1);  if(typeIdf($1)=="constant"){
									yyerror("erreur semantique modification d'une constante!");
								}
					
					
					if (typeIdf($1)!=$3.type)
					 					yyerror("erreur semantique incompatibilite des types affectation!");
								else {
										quad ("=",$3.res,"",$1);
										  }}
			
			|idf crocher_ouv idf crocher_ferm aff expressionAr pvg 
							{
								dec($1);dec($3);
								if(typeIdf($1)!=$6.type) 
										yyerror("erreur semantique incompatibilite des types affectation!");
										else{
											char* result=strcat(strcat(strdup($1),"["),strcat($3,"]"));
											quad ("=",$6.res,"",result);
										}
							}
			|idf crocher_ouv entier crocher_ferm aff expressionAr pvg {
								dec($1);
								if(typeIdf($1)!=$6.type) 
										yyerror("erreur semantique incompatibilite des types affectation!");
										else{
											char* result=strcat(strcat(strdup($1),"["),strcat($3,"]"));
											quad ("=",$6.res,"",result);
										}
							}
            ;

expressionAr: expressionAr add expressionAr {
								if ($1.type=="constant" || $3.type=="constant"){$$.type=$1.type; sprintf(tempC,"T%d",nTemp); nTemp++;
									$$.res=strdup(tempC); tempC[0]='\0';
									quad ("+",$1.res,$3.res,$$.res);}
								else if($1.type==$3.type){
									
									$$.type=$1.type;
									sprintf(tempC,"T%d",nTemp); nTemp++;
									$$.res=strdup(tempC); tempC[0]='\0';
									quad ("+",$1.res,$3.res,$$.res);
									
								}else {$$.type="FLOAT"; sprintf(tempC,"T%d",nTemp); nTemp++;
									$$.res=strdup(tempC); tempC[0]='\0';
									quad ("+",$1.res,$3.res,$$.res);}
							}
	| expressionAr sub expressionAr {
						if ($1.type=="constant" || $3.type=="constant"){$$.type=$1.type; 
						sprintf(tempC,"T%d",nTemp); nTemp++;
									$$.res=strdup(tempC); tempC[0]='\0';
									quad ("-",$1.res,$3.res,$$.res);}
								else
						         if ($1.type==$3.type) {$$.type=$1.type;
									sprintf(tempC,"T%d",nTemp); nTemp++;
									$$.res=strdup(tempC); tempC[0]='\0';
									quad ("-",$1.res,$3.res,$$.res);}
						else {
							$$.type="FLOAT";  sprintf(tempC,"T%d",nTemp);nTemp++;
							$$.res=strdup(tempC);tempC[0]='\0';
							quad ("-",$1.res,$3.res,$$.res);
						}
					}
	| expressionAr division expressionAr {
						if ($1.type=="constant" || $3.type=="constant"){$$.type=$1.type; sprintf(tempC,"T%d",nTemp); nTemp++;
									$$.res=strdup(tempC); tempC[0]='\0';
									quad ("/",$1.res,$3.res,$$.res);}
								else{
						
								$$.type="FLOAT";  sprintf(tempC,"T%d",nTemp);nTemp++;
								$$.res=strdup(tempC);tempC[0]='\0';
								quad ("/",$1.res,$3.res,$$.res);
								if(strcmp($3.res,"0")==0) yyerror("erreur symantique DIVISION PAR ZERO");
						
						
					}}
	| expressionAr mul expressionAr {
						if ($1.type=="constant" || $3.type=="constant"){$$.type=$1.type; sprintf(tempC,"T%d",nTemp); nTemp++;
									$$.res=strdup(tempC); tempC[0]='\0';
									quad ("*",$1.res,$3.res,$$.res);}
								else
						if ($1.type!=$3.type) {$$.type="FLOAT";
												sprintf(tempC,"T%d",nTemp);
												$$.res=strdup(tempC);nTemp++;tempC[0]='\0';
												quad ("*",$1.res,$3.res,$$.res);}
						else {
								$$.type=$1.type;  sprintf(tempC,"T%d",nTemp);
								$$.res=strdup(tempC);nTemp++;tempC[0]='\0';
								quad ("*",$1.res,$3.res,$$.res);
						}
					}
	|idf {dec ($1); $$.type=typeIdf($1);  $$.res=strdup($1);}
	|entier {$$.type="INTEGER";  $$.res=$1;}
	|reel {$$.type="FLOAT";  $$.res=$1;}
	|idf crocher_ouv entier crocher_ferm{$$.type=typeIdf($1);char* chaine=strcat(strdup($1),"[");strcat(chaine,strdup($3)); $$.res=strcat(chaine,"]");}
    |idf crocher_ouv idf crocher_ferm {$$.type=typeIdf($1);  char* chaine=strcat(strdup($1),"[");strcat(chaine,strdup($3)); $$.res=strcat(chaine,"]");}
	|par_ouvr expressionAr par_ferm {$$.type=$2.type; $$.res=$2.res;}
	;

// partie condition IF ELSE
CONDITION:IF list_inst ACCF_SIMPLE // le if tout seul 
         |IF list_inst ACCF_IF ELSE list_inst ACCF_ELSE  // le if else
		 ;

IF:mc_if par_ouvr cond par_ferm accolade_ouv { quad("BZ",temp_branchement_if[i],"temp_cond","");}
		;
ACCF_SIMPLE:accolade_ferm {sprintf(temp_branchement_if[i],"%d",indq); i=i+1;}
		;		 
ELSE:mc_else accolade_ouv {quad("BR",temp_branchement_if[i],"","");}
;
ACCF_IF:accolade_ferm {sprintf(temp_branchement_if[i],"%d",indq+1); i=i+1;}
		;
ACCF_ELSE:accolade_ferm{sprintf(temp_branchement_if[i],"%d",indq); i=i+1;}
		;		
// *****************************************************condition**********************************
cond:comparaison
	|expressionLog
	;
comparaison: expressionAr sup expressionAr {strcpy(sauvOpr,"BG");}
			|expressionAr inf expressionAr {strcpy(sauvOpr,"BL");}
			|expressionAr egale expressionAr {strcpy(sauvOpr,"BE");}
			|expressionAr diff expressionAr {strcpy(sauvOpr,"BNE");}
			|expressionAr sup_egale expressionAr {strcpy(sauvOpr,"BGE");}
			|expressionAr inf_egale expressionAr {strcpy(sauvOpr,"BLE");}
			;

expressionLog:par_ouvr comparaison par_ferm operateurLog par_ouvr comparaison par_ferm
		   |expressionAr operateurLog expressionAr
           |not expressionAr 
		   ;
operateurLog:and
            |or					 
			;

BOUCLEFOR: FOR list_inst ACCF1
;
//*******************************la boucle FOR**************
FOR:mc_for par_ouvr idf dpt entier dpt entier dpt idf par_ferm accolade_ouv {
                                                            quad("=",$5,"",$3);
                                                            empiler_Pile(&pile1,indq);
                                                            quad("+",$3,$7,"temp_cond");
                                                            empiler_Pile(&pile2,indq);
                                                            quad("BG",tostr(indq),"temp_cond",$9);
                                                            }
    ;
ACCF1:accolade_ferm {quad("BR",depiler_Pile(&pile1),"","");q[atoi(depiler_Pile(&pile2))].op1=tostr(indq);}
;
//***********************************la boucle while ***********************************
BOUCLEWHILE: WHILE WLS list_inst ACCF ;
WHILE: mc_while par_ouvr {empiler_Pile(&pile1,indq);} ;
WLS:   cond par_ferm accolade_ouv {
						quad("BZ",tostr(indq),"temp_cond","");
						empiler_Pile(&pile2,indq-1);
					  }
;

ACCF: accolade_ferm {
			quad("BR",depiler_Pile(&pile1),"","");
    		q[atoi(depiler_Pile(&pile2))].op1=tostr(indq);
			} 
;

//********************************** READ and WRITE rules***********************************
READ: mc_read par_ouvr idf par_ferm pvg
	 ;

WRITE: mc_write par_ouvr msg vg idf vg msg par_ferm pvg
	   |mc_write par_ouvr msg par_ferm pvg
	  ;


%%

int yyerror (char* msg){
    printf (" %s ligne %d  \n",msg,line,colo); exit (0);}

int main (){ 
    yyin = fopen("test.txt", "r");
    yyparse ();
	afficherTS ();
	
	afficherQuad();
	optimiser();
	printf("---------------||LISTE QUADS APRES OPTIMISATION ||---------------\n");
    afficherQuad();
	generateAssemblyCode(q,indq,"codeObj.asm");
    fclose (yyin);
}
