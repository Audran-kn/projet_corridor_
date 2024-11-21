//
// Created by Audran on 19/11/2024.
//
#include "header.h"

void demanderNombreDeJoueurs(int *nombreJoueurs) {
    do {
        printf("Combien de personnes jouent ? (%d, %d) : ", MIN_JOUEURS, MAX_JOUEURS);
        scanf("%d", nombreJoueurs);  // Utilisation du pointeur pour modifier nombreJoueurs
        if (*nombreJoueurs != MIN_JOUEURS && *nombreJoueurs != MAX_JOUEURS) {
            printf("Nombre de joueurs invalide. Veuillez reessayer.\n");
        }
    } while (*nombreJoueurs != MIN_JOUEURS && *nombreJoueurs != MAX_JOUEURS);
}