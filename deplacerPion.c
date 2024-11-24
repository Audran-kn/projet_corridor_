#include "header.h"

void deplacerPion(char plateau[TAILLE][TAILLE], int *X, int *Y, char direction, int *XX, int *YY) {

    plateau[*X][*Y] = ' '; // On remet la case à vide


    // Calcul de la nouvelle position selon la direction
    if (direction == '1' && *X > 0) (*X)--;           // Haut
    else if (direction == '2' && *X < TAILLE - 1) (*X)++;  // Bas
    else if (direction == '3' && *Y > 0) (*Y)--;      // Gauche
    else if (direction == '4' && *Y < TAILLE - 1) (*Y)++;  // Droite
    else if (direction == '0') (*Y)+0, (*X)+0;

    if (*X == *XX && *Y == *YY && direction == '1') {
        (*X)--; // Saut dans la même direction
    } else if (*X == *XX && *Y == *YY && direction == '2') {
        (*X)++;
    } else if (*X == *XX && *Y == *YY && direction == '3') {
        (*Y)--;
    } else if (*X == *XX && *Y == *YY && direction == '4') {
        (*Y)++;
    }
    plateau[*X][*Y] = 0x03;
}
