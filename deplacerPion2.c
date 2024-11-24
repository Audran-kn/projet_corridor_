#include "header.h"

void deplacerPion2(char plateau[9][9], int *XX, int *YY, char direction, int *X, int *Y, int *XXX, int *YYY, int *XXXX, int *YYYY) {
    plateau[*XX][*YY] = ' ';
    if (direction == '1' && *XX > 0) (*XX)--;           // bas
    else if (direction == '2' && *XX < 9 - 1) (*XX)++;  // haut
    else if (direction == '3' && *YY > 0) (*YY)--;      // droite
    else if (direction == '4' && *YY < 9 - 1) (*YY)++;  // gauche
    else if (direction == '0') (*YY)+0, (*XX)+0;

    if (*XX == *X && *YY == *Y && direction == '1'||*XX == *XXX && *YY == *YYY && direction == '1'|| *XX == *XXXX && *YY == *YYYY && direction == '1') {
        (*XX)--; // Saut dans la même direction
    } else if (*XX == *X && *YY == *Y && direction == '2'||*XX == *XXX && *YY == *YYY && direction == '2'|| *XX == *XXXX && *YY == *YYYY && direction == '2') {
        (*XX)++;
    } else if (*XX == *X && *YY == *Y && direction == '3'||*XX == *XXX && *YY == *YYY && direction == '3'|| *XX == *XXXX && *YY == *YYYY && direction == '3') {
        (*YY)--;
    } else if (*XX == *X && *YY == *Y && direction == '4'||*XX == *XXX && *YY == *YYY && direction == '4'|| *XX == *XXXX && *YY == *YYYY && direction == '4') {
        (*YY)++;
    }
    plateau[*XX][*YY] = 0x04;
}
