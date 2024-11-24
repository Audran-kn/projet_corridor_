#include "header.h"

void deplacerPion2(char plateau[TAILLE][TAILLE], int *XX, int *YY, char direction, int *X, int *Y) {
    plateau[*XX][*YY] = ' ';
    if (direction == '1' && *XX > 0) (*XX)--;           // bas
    else if (direction == '2' && *XX < TAILLE - 1) (*XX)++;  // haut
    else if (direction == '3' && *YY > 0) (*YY)--;      // droite
    else if (direction == '4' && *YY < TAILLE - 1) (*YY)++;  // gauche
    else if (direction == '0') (*YY)+0, (*XX)+0;

    if (*X == *XX && *Y == *YY && direction == '1') {
        (*XX)--; // Saut dans la même direction
    } else if (*X == *XX && *Y == *YY && direction == '2') {
        (*XX)++;
    } else if (*X == *XX && *Y == *YY && direction == '3') {
        (*YY)--;
    } else if (*X == *XX && *Y == *YY && direction == '4') {
        (*YY)++;
    }
    plateau[*XX][*YY] = 0x04;
}
