//
// Created by Audran on 20/11/2024.
//

#include "header.h"

// Fonction pour placer une barriere dans un tableau 9x9
void placerBarrieres(char plateau[9][9]) {
    char case1[3], case2[3], position;
    int x1, y1, x2, y2;

    printf("Entrez les coordonnees de deux cases voisines (ex: D1 D2) et la position (H = haut, B = bas, G = gauche, D = droite) : ");
    scanf("%s %s %c", case1, case2, &position);

    // Convertir les coordonnees en indices du tableau
    y1 = toupper(case1[0]) - 'A'; // Lettre colonne -> indice
    x1 = case1[1] - '1';          // Chiffre ligne -> indice
    y2 = toupper(case2[0]) - 'A';
    x2 = case2[1] - '1';

    // Verifier si les cases sont voisines
    if (!((abs(x1 - x2) == 1 && y1 == y2) || (abs(y1 - y2) == 1 && x1 == x2))) {
        printf("Les cases ne sont pas voisines. Reessayez.\n");
        return;
    }

    // Placer la barriere selon la position
    if (position == 'H' && x1 > 0) {  // Barriere horizontale au-dessus
        if (plateau[x1 - 1][y1] == ' ' && plateau[x1 - 1][y2] == ' ') {
            plateau[x1 - 1][y1] = 'B';
            plateau[x1 - 1][y2] = 'B';
            printf("Barriere horizontale placee avec succes !\n");
        } else {
            printf("Impossible de placer une barriere ici. Reessayez.\n");
        }
    } else if (position == 'B' && x1 < 8) {  // Barriere horizontale en dessous
        if (plateau[x1 + 1][y1] == ' ' && plateau[x1 + 1][y2] == ' ') {
            plateau[x1 + 1][y1] = 'B';
            plateau[x1 + 1][y2] = 'B';
            printf("Barriere horizontale placee avec succes !\n");
        } else {
            printf("Impossible de placer une barriere ici. Reessayez.\n");
        }
    } else if (position == 'G' && y1 > 0) {  // Barriere verticale a gauche
        if (plateau[x1][y1 - 1] == ' ' && plateau[x2][y1 - 1] == ' ') {
            plateau[x1][y1 - 1] = 'B';
            plateau[x2][y1 - 1] = 'B';
            printf("Barriere verticale placee avec succes !\n");
        } else {
            printf("Impossible de placer une barriere ici. Reessayez.\n");
        }
    } else if (position == 'D' && y1 < 8) {  // Barriere verticale a droite
        if (plateau[x1][y1 + 1] == ' ' && plateau[x2][y1 + 1] == ' ') {
            plateau[x1][y1 + 1] = 'B';
            plateau[x2][y1 + 1] = 'B';
            printf("Barriere verticale placee avec succes !\n");
        } else {
            printf("Impossible de placer une barriere ici. Reessayez.\n");
        }
    } else {
        printf("Position invalide ou hors des limites. Reessayez.\n");
    }
}
