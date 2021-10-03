//
// Created by Remi CHARDONNET on 27/09/2021.
//

#include <stdio.h>
#include "fonctions.h"

/* Fonction qui donne le maximum entre a et b.
 * Paramètres :
 * - IN : les nombres entiers a et b dont on veut savoir lequel est le plus grand
 * - OUT : la valeur la plus grande entre a et b
 */

int GetMax(int a, int b){
    return (a > b) ? a : b;
}

/* Fonction qui demande a l'utilisateur de un entier qui va etre associé a une valeur.
 * Paramètres :
 * - IN : pas de parametre d'entré
 *  -OUT : l'entier avec sa valeur
 */

int saisirEntier(){
    int entier = 0;
    printf("Saisir l'entier :\n>", entier);
    scanf("%d", &entier);
    return entier;
}

/* Fonction qui calcul l'aire d'un rectangle.
 * Paramètres :
 * - IN : les entiers longueur et largeur du rectangle dont on veut savoir l'aire
 *  - OUT : l'aire du rectangle.
 */

int calculAire(int longueur, int largeur){
    return (longueur * largeur);
}

/* Fonction qui calcul le perimetre d'un rectangle.
 * Paramètres :
 * - IN : les entiers longueur et largeur du rectangle dont on veut savoir l'aire
 * -OUT : le perimetre du rectangle
 */

int calculPerimetre(int longueur, int largeur){
    return ((largeur + longueur) * 2);
}

/* Fonction qui montre si le premier nombre est multiple du second.
 * Paramètres :
 * - IN : les entiers premier et second qui sont comparées pour savoir si le premier est multiple du second
 * - OUT : la valeur 1 si c'est vrai et 0 si c'est faux
 */

int multipleDuSecond(int premier, int second){
    if(premier % second == 0){
        return 1;
    }
    else{
        return 0;
    }
}

/* Fonction qui montre si un nombre est superieur ou egal a un autre ou inferieur.
 * Paramètres :
 * - IN : les entiers a et b qui sont comparés pour afin de savoir si a est superieur ou egal a b ou inferieur à b
 * - OUT : retourne le resultat de la comparaison de grandeur entre a et b
 */

int estSuperieurA(int a, int b){
    if(a >= b){
        printf("\n>%d est superieur ou egal a %d", a, b);
    }
    else{
        printf("\n>%d est inferieur a %d", a, b);
    }
}

/* Fonction qui calcul la moyenne entre 3 notes comprises entre 0 et 20.
 * Paramètres :
 * - IN : les entiers des 3 notes qui vont etre pris pour calculer la moyenne
 * - OUT : la moyenne des notes ou -1 en cas d'erreur de saisie
 */

int moyenneTroisNotes(int Note1, int Note2, int Note3){
    int moyenne = 0;
    if(Note1 > 20 || Note1 < 0){
        return moyenne = -1;
    }
    else if(Note2 > 20 || Note2 < 0){
        return moyenne = -1;
    }
    else if(Note3 > 20 || Note3 < 0){
        return moyenne = -1;
    }
    else{
        return moyenne = ((Note3 + Note2 + Note1) / 3);
    }
}