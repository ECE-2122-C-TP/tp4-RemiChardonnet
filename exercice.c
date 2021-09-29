//
// Created by Remi CHARDONNET on 27/09/2021.
//

#define SUP 10

#include <stdio.h>
#include "fonctions.h"
#include "exercice.h"

void exercice1(){
    int a = 0, b = 0;
    printf("Saisissez la valeur des deux entiers :\n>");
    scanf("%d %d", &a, &b);
    printf("%d est le plus grand des deux entiers", GetMax(a, b));
}


void exercice2(){
    int entier = 0;
    saisirEntier(entier);
}


void exercice3(){
    int longueur = 0, largeur = 0;
    longueur = saisirEntier();
    largeur = saisirEntier();
    printf("L'aire est de %d et le perimetre de %d", calculAire(longueur, largeur), calculPerimetre(longueur, largeur));
}


void exercice4(){
    int premier = 0, second = 0;
    second = 3;
    premier = saisirEntier();
    printf("L'entier est multiple de 3 : vrai (1) faux (0) :\n>%d", multipleDuSecond(premier, second));
    estSuperieurA(premier, SUP);
}


void exercice5(){
    int Note1 = 0, Note2 = 0, Note3 = 0;
    Note1 = saisirEntier();
    Note2 = saisirEntier();
    Note3 = saisirEntier();
    printf("La moyenne des notes est de :\n>%d (si la valeur est -1, il y a une erreur dans la saisie)", moyenneTroisNotes(Note1, Note2, Note3));
}