//
// Created by Audran on 19/11/2024.
//
#include "header.h"

void deplacerPion(char plateau[9][9], int *X, int *Y, char direction) {
    // Supprimer la position actuelle du pion
    plateau[*X][*Y] = ' '; // On remet la case à vide

    // Calcul de la nouvelle position selon la direction
    if (direction == '1' && *X > 0) (*X)--;           // Haut
    else if (direction == '2' && *X < 9 - 1) (*X)++;  // Bas
    else if (direction == '3' && *Y > 0) (*Y)--;      // Gauche
    else if (direction == '4' && *Y < 9 - 1) (*Y)++;  // Droite
    else if (direction == '0') (*Y)+0, (*X)+0;

    plateau[*X][*Y] = 'O';
}
