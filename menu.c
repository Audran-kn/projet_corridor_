//
// Created by Audran on 19/11/2024.
//
#include "header.h"

void menu() {
    int choix;

    do {
        printf("\n-------------------- Menu --------------------\n");
        printf("1. Lancer une nouvelle partie\n");
        printf("2. Reprendre une partie sauvegardée\n");
        printf("3. Afficher l'aide\n");
        printf("4. Afficher les scores des joueurs\n");
        printf("5. Quitter le jeu\n");
        printf("---------------------------------------------\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("\nLancement d'une nouvelle partie...\n");
            // Placeholder: fonction à implémenter pour lancer une nouvelle partie
            break;

            case 2:
                printf("\nReprise d'une partie sauvegardée...\n");
            // Placeholder: fonction à implémenter pour reprendre une partie sauvegardée
            break;

            case 3:
                printf("\nAffichage de l'aide...\n");
            // Placeholder: fonction pour afficher l'aide
            break;

            case 4:
                printf("\nAffichage des scores des joueurs...\n");
            // Placeholder: fonction pour afficher les scores
            break;

            case 5:
                printf("\nMerci d'avoir joué ! À bientôt !\n");
            break;

            default:
                printf("\nChoix invalide. Veuillez réessayer.\n");
            break;
        }
    } while (choix != 5);
}