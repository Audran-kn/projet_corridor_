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
#define LARGEUR_CONSOLE 50


void deplacerPion(char plateau[9][9], int *X, int *Y, char direction, int *XXXX, int *YYYY, int *XX, int *YY, int *XXX, int *YYY);
void deplacerPion2(char plateau[9][9], int *XX, int *YY, char direction, int *XXXX, int *YYYY, int *X, int *Y, int *XXX, int *YYY);
void deplacerPion3(char plateau[9][9], int *XXX, int *YYY, char direction, int *X, int *Y, int *XX, int *YY, int *XXXX, int *YYYY);
void deplacerPion4(char plateau[9][9], int *XXXX, int *YYYY, char direction, int *X, int *Y, int *XX, int *YY, int *XXX, int *YYY);
void initialiserPlateau(char plateau[TAILLE][TAILLE], int X, int Y, int XX, int YY);
void afficherPlateau(char plateau[TAILLE][TAILLE]);
void demanderNombreDeJoueurs(int *nombreJoueurs);
void demanderNomsJoueurs(char nomsJoueurs[MAX_JOUEURS][25], int nombreJoueurs);
void afficherNomsJoueurs(char nomsJoueurs[MAX_JOUEURS][25], int nombreJoueurs);
void menu();
void initialiserPlateau4(char plateau[TAILLE][TAILLE], int X, int Y, int XX, int YY, int XXX, int YYY, int XXXX, int YYYY);
int choixPremierJoueur(int nombreJoueurs);
void clear(int n);
void placerBarrieres(char plateau[TAILLE][TAILLE], int joueur, int *compteurBarriere);
int verifierValiditeBarriere(char plateau[TAILLE][TAILLE], int x, int y, char orientation);
void setColor(int color);
void conditionVictoire2(int *X, int *Y, int *XX, int *YY, int *XXX, int *YYY, int *XXXX, int *YYYY, char nomsJoueurs[MAX_JOUEURS][25]);



#endif //HEADER_H

