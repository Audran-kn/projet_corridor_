//
// Created by Audran on 19/11/2024.
//
#include "header.h"

void menu() {
    int choix;

    do {
        printf("\n-------------------- Menu --------------------\n");
        printf("1. Lancer une nouvelle partie\n");
        printf("2. Reprendre une partie sauvegardee\n");
        printf("3. Afficher l'aide\n");
        printf("4. Afficher les scores des joueurs\n");
        printf("5. Quitter le jeu\n");
        printf("---------------------------------------------\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                printf("\nLancement d'une nouvelle partie...\n");

                int nombreJoueurs = 0;
                char nomsJoueurs[MAX_JOUEURS][25];
                char plateau[9][9];
                int X = 8, Y = 4;  // Position initiale du pion (en bas au centre)
                int XX = 0, YY = 4; // position initiale du pion 2 (en haut au centre)
                char direction, direction2;

                // Demander le nombre de joueurs et leurs noms
                demanderNombreDeJoueurs(&nombreJoueurs); // Passage par adresse
                demanderNomsJoueurs(nomsJoueurs, nombreJoueurs);
                afficherNomsJoueurs(nomsJoueurs, nombreJoueurs); // Afficher les noms pour verification

                // Initialisation et affichage du plateau
                initialiserPlateau(plateau, X, Y, XX, YY);

                while (1) {
                    afficherPlateau(plateau);  // Afficher le plateau

                    printf("Deplacez le pion (0 = Sauter le tour, 1 = haut, 2 = bas, 3 = gauche, 4 = droite, 5 = quitter) : \n");
                    scanf(" %c", &direction);

                    if (direction == '5') {
                        printf("Merci d'avoir joue !\n");
                        break;
                    }

                    deplacerPion(plateau, &X, &Y, direction);  // Déplacer le pion (passage par référence pour X, Y)

                    afficherPlateau(plateau);  // Afficher le plateau

                    printf("Deplacez le pion (0 = Sauter le tour, 1 = bas, 2 = haut, 3 = droite, 4 = gauche, 5 = quitter) : \n");
                    scanf(" %c", &direction2);

                    if (direction == '5') {
                        break;
                    }
                    deplacerPion2(plateau, &XX, &YY, direction2);
                }
                break;

            }
            case 2:
                printf("\nReprise d'une partie sauvegardee...\n");
            // Placeholder: fonction à implémenter pour reprendre une partie sauvegardée
            break;

            case 3 : {
                printf("\nAffichage de l'aide...\n");
                printf("\n===== REGLES DU JEU =====\n");

    printf("\n--- REGLES POUR 2 JOUEURS ---\n");
    printf("1. **Placement initial :**\n");
    printf("   - Chaque joueur pose son pion au centre de sa ligne de depart.\n");
    printf("   - Chaque joueur dispose de 10 barrieres en zone de stockage.\n");
    printf("   - Un tirage au sort determine qui commence.\n");

    printf("\n2. **Deroulement de la partie :**\n");
    printf("   - A tour de role, chaque joueur peut :\n");
    printf("     a) Deplacer son pion d'une case (horizontalement ou verticalement).\n");
    printf("     b) Poser une barriere pour ralentir l'adversaire ou se creer un chemin.\n");
    printf("   - Lorsqu'il n'a plus de barrieres, un joueur est oblige de deplacer son pion.\n");

    printf("\n3. **Deplacement des pions :**\n");
    printf("   - Les pions se deplacent d'une case horizontalement ou verticalement.\n");
    printf("   - Les barrieres doivent etre contournees.\n");

    printf("\n4. **Pose des barrieres :**\n");
    printf("   - Une barriere doit etre posee exactement entre deux blocs de deux cases.\n");
    printf("   - Il est interdit de bloquer completement l'acces de l'adversaire a sa ligne de but.\n");

    printf("\n5. **Regles speciales : Face a face :**\n");
    printf("   - Si les deux pions sont sur des cases voisines non separees par une barriere :\n");
    printf("     -> Le joueur dont c'est le tour peut sauter par-dessus l'adversaire.\n");
    printf("     -> Si une barriere bloque ce saut, le joueur peut bifurquer a droite ou a gauche.\n");

    printf("\n6. **Fin de la partie :**\n");
    printf("   - Le premier joueur qui atteint l'une des 9 cases de la ligne opposee gagne.\n");

    printf("\n--- REGLES POUR 4 JOUEURS ---\n");
    printf("1. **Placement initial :**\n");
    printf("   - Les 4 pions sont disposes au centre de chacun des 4 cotes du plateau.\n");
    printf("   - Chaque joueur dispose de 5 barrieres.\n");

    printf("\n2. **Regles identiques :**\n");
    printf("   - Les regles sont strictement identiques a celles pour 2 joueurs.\n");
    printf("   - Mais on ne peut sauter qu'un pion a la fois.\n");

    printf("\n--- DUREE D'UNE PARTIE ---\n");
    printf("   - La duree moyenne est de 10 a 20 minutes.\n");
    printf("   - En tournoi, chaque joueur peut disposer d'un temps limite.\n");

    printf("\n============================\n");
                break;
            }

            case 4:
                printf("\nAffichage des scores des joueurs...\n");
            // Placeholder: fonction pour afficher les scores
            break;

            case 5:
                printf("\ndeja finis ? alors a bientot mon goat5 \n");
            break;

            default:
                printf("\nChoix invalide. Veuillez reessayer.\n");
            break;
        }
    } while (choix != 5);
}