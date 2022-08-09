

// Oracle Bleu
// 
// ChrisDev427
// 8 aout 2022
// main.c

//Programme réalisé comme sujet d'exercice durant ma formation "Les bases du langage C"

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.c"
#include "fonctions.h"



int main(int argc, char *argv[])
{
    int choix1, choix2, choix3, choix4, choix5;
    
    
    
    printf("\n\n==== Oracle Bleu ====\n\nInterpretation des cartes\nAppuyez sur Entrer\n\n");
    getchar();
    printf("\nEntrez les 5 numéros des cartes de votre tirage\n\n");
    
    printf("Première carte : ");
    scanf("%d", &choix1);
    
    printf("Deuxième carte : ");
    scanf("%d", &choix2);
    
    printf("Troisième carte : ");
    scanf("%d", &choix3);
    
    printf("Quatrième carte : ");
    scanf("%d", &choix4);
    
    printf("Cinquième carte : ");
    scanf("%d", &choix5);

    affichage(choix1);
    affichage(choix2);
    affichage(choix3);
    affichage(choix4);
    affichage(choix5);

    
    

    return 0;
}


