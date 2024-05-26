#include <stdio.h>
#include <string.h>
#include "TS.h"


int indexTS =0;

int recherche (char * el)
{
    int i=0;
    while (i<indexTS && strcmp(TS[i].nom,el)) i++;
    if (i==indexTS) return -1;
    return i;
}

void inserer (char* el, char* typ)
{
    TS[indexTS].nom=el;
    TS[indexTS].type=typ;
    indexTS ++;
}
void afficherTS() {
    int i = 0;
    printf("\n***********************TS*****************************\n");
    printf("|%-20s | %-20s|\n", "Identifiant", "Type");
    printf("|---------------------|---------------------|\n");
    for (i = 0; i < indexTS; i++)
        printf("|%-20s | %-20s|\n", TS[i].nom, TS[i].type);
    printf("-----------------------------------------------------\n");
}


char* typeIdf(char* el)
{ 
    return TS[recherche(el)].type;
}
