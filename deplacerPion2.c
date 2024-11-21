//
// Created by Audran on 19/11/2024.
//
# include "header.h"

void deplacerPion2(char plateau[9][9], int *XX, int *YY, char direction) {
    plateau[*XX][*YY] = ' ';
    if (direction == '1' && *XX > 0) (*XX)--;           // bas
    else if (direction == '2' && *XX < 9 - 1) (*XX)++;  // haut
    else if (direction == '3' && *YY > 0) (*YY)--;      // droite
    else if (direction == '4' && *YY < 9 - 1) (*YY)++;  // gauche
    else if (direction == '0') (*YY)+0, (*XX)+0;
    
    plateau[*XX][*YY] = 0x04;
}
