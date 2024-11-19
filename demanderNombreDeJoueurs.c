//
// Created by Audran on 19/11/2024.
//
#include "header.h"

void demanderNombreDeJoueurs(int *nombreJoueurs) {  // Passage par référence
    do {
        printf("Combien de personnes jouent ? (%d, %d, %d) : ", MIN_JOUEURS, INT_JOUEURS, MAX_JOUEURS);
        scanf("%d", nombreJoueurs);  // Utilisation du pointeur pour modifier nombreJoueurs
        if (*nombreJoueurs < MIN_JOUEURS || *nombreJoueurs > MAX_JOUEURS) {
            printf("Nombre de joueurs invalide. Veuillez réessayer.\n");
        }
    } while (*nombreJoueurs < MIN_JOUEURS || *nombreJoueurs > MAX_JOUEURS);

    // S'assurer que la partie se joue avec 2 ou 4 joueurs
    if (*nombreJoueurs == 1) {
        int choix;
        do {
            printf("Voulez-vous jouer avec 1 ordinateur ou 3 ordinateurs ?: ");
            scanf("%d", &choix);
            if (choix == 1) {
                *nombreJoueurs = 2;
            } else if (choix == 3) {
                *nombreJoueurs = 4;
            } else {
                printf("Choix invalide. Veuillez réessayer.\n");
            }
        } while (choix != 1 && choix != 3);
    }
}