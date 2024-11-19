//
// Created by Audran on 19/11/2024.
//

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_JOUEURS 4
#define INT_JOUEURS 2
#define MIN_JOUEURS 1


void deplacerPion(char plateau[9][9], int *X, int *Y, char direction);
void deplacerPion2(char plateau[9][9], int *XX, int *YY, char direction);
void initialiserPlateau(char plateau[9][9], int X, int Y, int XX, int YY);
void afficherPlateau(char plateau[9][9]);
void demanderNombreDeJoueurs(int *nombreJoueurs);
void demanderNomsJoueurs(char nomsJoueurs[MAX_JOUEURS][25], int nombreJoueurs);
void afficherNomsJoueurs(char nomsJoueurs[MAX_JOUEURS][25], int nombreJoueurs);
void menu();
void orientationBarrieres();

#endif //HEADER_H
