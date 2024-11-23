#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <locale.h>
#include <io.h>
#include <fcntl.h>
#include <time.h>
#include <windows.h>


#define TAILLE 9
#define MAX_JOUEURS 4
#define MIN_JOUEURS 2


void deplacerPion(char plateau[TAILLE][TAILLE], int *X, int *Y, char direction);
void deplacerPion2(char plateau[TAILLE][TAILLE], int *XX, int *YY, char direction);
void initialiserPlateau(char plateau[TAILLE][TAILLE], int X, int Y, int XX, int YY);
void afficherPlateau(char plateau[TAILLE][TAILLE]);
void demanderNombreDeJoueurs(int *nombreJoueurs);
void demanderNomsJoueurs(char nomsJoueurs[MAX_JOUEURS][25], int nombreJoueurs);
void afficherNomsJoueurs(char nomsJoueurs[MAX_JOUEURS][25], int nombreJoueurs);
void menu();
void deplacerPion3(char plateau[TAILLE][TAILLE], int *XXX, int *YYY, char direction);
void deplacerPion4(char plateau[TAILLE][TAILLE], int *XXXX, int *YYYY, char direction);
void initialiserPlateau4(char plateau[TAILLE][TAILLE], int X, int Y, int XX, int YY, int XXX, int YYY, int XXXX, int YYYY);
int choixPremierJoueur(int nombreJoueurs);
void clear(int n);
void placerBarrieres(char plateau[TAILLE][TAILLE], int joueur, int *compteurBarriere);
int verifierValiditeBarriere(char plateau[TAILLE][TAILLE], int x, int y, char orientation);
void setColor(int color);
void conditionVictoire2(int *X, int *Y, int *XX, int *YY, int *XXX, int *YYY, int *XXXX, int *YYYY, char nomsJoueurs[MAX_JOUEURS][25]);



#endif //HEADER_H

