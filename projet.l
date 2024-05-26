%option yylineno
%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "projet.tab.h"
#include "TS.h"



extern YYSTYPE yylval;
int line=1,colo=1;

//redéfinition de la fonction atoi pour pouvoir délimiter l'intervalle des nombres entiers.
int atoi_red(char *t){
    int b; int r; char *y;
    //printf("\n le %c \n",t[0]);
    if (t[0]=='('){
	    printf(" %c",t[0]);
        for(b=0;b<strlen(t);b++){
		   
            t[b]=t[b+1];
                 r=atoi(t);}
    }
	else{
        r=atoi(t);
		}
    return(r);}	

%}

%option noyywrap

chiffre [0-9]
lettre [a-zA-Z]

chiffreSigne "("[-+]?([1-9][0-9]*|0)")"
chiffreReelSigne "("[+-]?([0-9][0-9]*"."[0-9]*|0)")"

IDF {lettre}({lettre}|{chiffre})*
entier ({chiffre}+|{chiffreSigne})
reel ({chiffreReelSigne}|({chiffre}+"."{chiffre}+))
commentaire "%%".*$
message  \"[^\"\n]*\"

%%
 
"VAR_GLOBAL"	 {colo+=yyleng; yylval.nom = strdup(yytext);    printf(" MOT CLE '%s' reconnu \n ",yytext); return mc_var_global;}
"DECLARATION"	 {colo+=yyleng; yylval.nom = strdup(yytext); printf(" MOT CLE '%s' reconnu \n ",yytext); return mc_declaration;}	
"INSTRUCTION"   {colo+=yyleng; yylval.nom = strdup(yytext); printf(" MOT CLE '%s' reconnu \n ",yytext); return mc_instruction;}
"INTEGER"       {colo+=yyleng; yylval.nom = strdup(yytext);  printf(" MOT CLE '%s' reconnu \n ",yytext); return mc_integer;}
"FLOAT"         {colo+=yyleng; yylval.nom = strdup(yytext); printf(" MOT CLE '%s' reconnu \n ",yytext); return mc_float;}
"CONST"         {colo+=yyleng; yylval.nom = strdup(yytext); printf(" MOT CLE '%s' reconnu \n ",yytext); return mc_const;}
"IF"            {colo+=yyleng; yylval.nom = strdup(yytext); printf(" MOT CLE '%s' reconnu \n ",yytext); return mc_if;}
"ELSE"          {colo+=yyleng; yylval.nom = strdup(yytext); printf(" MOT CLE '%s' reconnu \n ",yytext); return mc_else;}
"FOR"		    {colo+=yyleng; yylval.nom = strdup(yytext); printf(" MOT CLE '%s' reconnu \n ",yytext); return mc_for;}
"READ"			 {colo+=yyleng; yylval.nom = strdup(yytext); printf(" MOT CLE '%s' reconnu \n ",yytext); return mc_read;}
"WRITE"			 {colo+=yyleng; yylval.nom = strdup(yytext); printf(" MOT CLE '%s' reconnu \n ",yytext); return mc_write;}
"WHILE"			 {colo+=yyleng; yylval.nom = strdup(yytext); printf(" MOT CLE '%s' reconnu \n ",yytext); return mc_while;}


{IDF} 			{colo+=yyleng; yylval.nom = strdup(yytext);  
                   
					
					if (yyleng>8){
                    printf ("Erreur Lexical: IDF trop long a la ligne  %d a la colonne %d \n ",line,colo);}
                    else{
                        printf("idf %s reconnu \n",yytext);
                        return idf;

                    }
                }
{entier} 		{colo+=yyleng; 
					if ((atoi_red(yytext)<-32768 )||(atoi_red(yytext)>32767)){
							printf("%s : INTEGER  n'appartient pas a [-32768,32767] dans la ligne %d et colonne %d \n",yytext,line,colo);}
							else{ 
								yylval.nom = strdup(yytext);}printf("entier %s reconnu\n ",yytext);return entier;}
{reel} 			{colo+=yyleng; yylval.nom = strdup(yytext);printf("reel %s reconnu \n",yytext);return reel;}


"=" {
    colo+=yyleng; printf("%s reconnu \n",yytext);  return aff;}
"(" {
    colo+=yyleng; printf("%s reconnu \n",yytext); return par_ouvr;}
")" {
    colo+=yyleng; printf("%s reconnu \n",yytext); return par_ferm;}
"+" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return add;}
"-" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return sub;}
"/" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return division;}
"*" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return mul;}
";" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return pvg;}
"," {
    colo+=yyleng;printf("%s reconnu \n",yytext); return vg;}
"." {
    colo+=yyleng;printf("%s reconnu \n",yytext); return pt;}
":" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return dpt;}
"{" {
    colo+=yyleng;; printf("%s reconnu \n",yytext); return accolade_ouv;}
"}" {
    colo+=yyleng;; printf("%s reconnu \n",yytext); return accolade_ferm;}
"&&" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return and;}
"||" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return or;}
"!" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return not;}
"<" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return inf;}
">" {
    colo+=yyleng; printf("%s reconnu \n",yytext); return sup;}
"<=" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return inf_egale;}
">=" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return sup_egale;}
"==" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return egale; }
"!=" {
    colo+=yyleng;printf("%s reconnu \n",yytext); return diff;}
"[" {
    colo+=yyleng; printf("%s reconnu \n",yytext); return crocher_ouv;}
"]" {
    colo+=yyleng; printf("%s reconnu \n",yytext); return crocher_ferm;}

{message} {colo+=yyleng; printf("%s reconnu \n",yytext); return msg;}

{commentaire}   { printf("Commentaire reconnu!! %s \n",yytext);}
[ \t]            colo+=yyleng;
\n              {  line++; }
.               { printf("Entite lexicale non reconnue a ligne %d a la colonne %d l entite %s \n", line, colo, yytext); }
