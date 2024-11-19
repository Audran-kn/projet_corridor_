//
// Created by Audran on 19/11/2024.
//
#include "header.h"

void initialiserPlateau(char plateau[9][9], int X, int Y, int XX, int YY) {
    // Initialisation de chaque case du plateau avec un caractère vide
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            plateau[i][j] = ' ';  // Case vide
        }
    }
    // Positionner le pion 1 initialement
    plateau[X][Y] = 'O';
    // Positionner le pion 2 initialement
    plateau[XX][YY] = 'x';
}