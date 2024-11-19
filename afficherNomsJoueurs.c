//
// Created by Audran on 19/11/2024.
//

#include "header.h"

void afficherNomsJoueurs(char nomsJoueurs[MAX_JOUEURS][25], int nombreJoueurs) {
    printf("voici les joueurs :\n");
    for (int i = 0; i < nombreJoueurs; i++) {
        printf("Joueur %d : %s\n", i + 1, nomsJoueurs[i]);
    }
}