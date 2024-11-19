//
// Created by Audran on 19/11/2024.
//
#include "header.h"

void demanderNomsJoueurs(char nomsJoueurs[MAX_JOUEURS][25], int nombreJoueurs) {
    for (int i = 0; i < nombreJoueurs; i++) {
        printf("quel est le pseudo du joueur %d : ", i + 1);
        scanf("%s", nomsJoueurs[i]);  // Lire le nom du joueur
    }

    // Ajouter des joueurs ordinateurs si nécessaire pour atteindre le nombre requis
    for (int i = nombreJoueurs; i < MAX_JOUEURS; i++) {
        sprintf(nomsJoueurs[i], "Ordinateur %d", i - nombreJoueurs + 1);  // Nom correct
    }
}