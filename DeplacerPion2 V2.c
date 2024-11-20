#include "header.h"

void deplacerPion2(char plateau[9][9], int *XX, int *YY, char direction) {
    plateau[*XX][*YY] = ' ';
    if (direction == '1' && *XX > 0) (*XX)--;           // Haut
    else if (direction == '2' && *XX < 9 - 1) (*XX)++;  // Bas
    else if (direction == '3' && *YY > 0) (*YY)--;      // Gauche
    else if (direction == '4' && *YY < 9 - 1) (*YY)++;  // Droite
    else if (direction == '0') (*YY)+0;  // Sauter le tour
    plateau[*XX][*YY] = 0x06;
}