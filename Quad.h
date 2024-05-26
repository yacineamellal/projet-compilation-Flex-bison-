#ifndef QUAD_H
#define QUAD_H

#define t 100
typedef struct {char*opr;
				 char* op1;
				 char* op2;
				 char* res;}quadruplet;
				 
quadruplet q[t];

typedef struct element_pile{
	char *donnee;
	struct element_pile *prc;
}pile;


pile *pile1,*pile2;
//fonction d'insertion d'un nouveau quad
void quad (char*,char*,char*,char*);
//fonction qui affiche les quads
void afficherQuad();
//fonction pour empiler dans la pile.
void empiler_Pile(pile **p,int donne);
//fonction pour désempiler a partir d'une pile.
char* depiler_Pile(pile**p);
//transformer un entier en chaine de caracteres.
char* tostr(int m);
//fonction pour générer les quadruplets de IF.
void quad_if(char*);
//les fonctions d'optimisations
void OptPropCopie(quadruplet * q);
void OptSimplifAlg(quadruplet *q);
void OptExpRedondantes(quadruplet * q);
//fonction qui regroupe toutes les fonctions d'optimisations.
void optimiser();
//fonction qui génere le code objet.
void generateAssemblyCode(quadruplet*, int, const char*);


#endif // QUAD_H