#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>



#define MAX_JOUEURS 4
#define MIN_JOUEURS 2


void deplacerPion(char plateau[9][9], int *X, int *Y, char direction);
void deplacerPion2(char plateau[9][9], int *XX, int *YY, char direction);
void deplacerPion3(char plateau[9][9], int *XXX, int *YYY, char direction);
void deplacerPion4(char plateau[9][9], int *XXXX, int *YYYY, char direction);
void initialiserPlateau(char plateau[9][9], int X, int Y, int XX, int YY);
void initialiserPlateau4(char plateau[9][9], int X, int Y, int XX, int YY, int XXX, int YYY, int XXXX, int YYYY);
void afficherPlateau(char plateau[9][9]);
void demanderNombreDeJoueurs(int *nombreJoueurs);
void demanderNomsJoueurs(char nomsJoueurs[MAX_JOUEURS][25], int nombreJoueurs);
void afficherNomsJoueurs(char nomsJoueurs[MAX_JOUEURS][25], int nombreJoueurs);
void menu();
void placerBarrieres(char plateau[9][9]);

#endif //HEADER_H
