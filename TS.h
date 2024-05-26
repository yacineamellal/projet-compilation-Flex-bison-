#ifndef TS_H
#define TS_H

#define taille 10000
//
typedef struct {
                char* nom;
                char* type;
                }elem;
                
elem TS[taille];

// fonction qui recherche un element chaine de caractere dans la table des symboles
int recherche (char * );
// fonction d'insertion d'un idf dans la table
void inserer (char*,char* );
// fonction qui affiche la table des symboles
void afficherTS ();
// fonction qui retourne le type d'un IDF
char* typeIdf(char*);

#endif //TS_H