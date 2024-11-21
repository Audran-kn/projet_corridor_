#include "header.h"

int main() {
    int choix;
    do {
        // Affiche le menu principal et récupère le choix
        menu();
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                // Lancer une nouvelle partie
                int nombreJoueurs = 0;
                char nomsJoueurs[MAX_JOUEURS][25];
                char plateau[9][9];
                int X = 8, Y = 4;  // Position initiale du pion 1
                int XX = 0, YY = 4;  // Position initiale du pion 2
                char direction;
                char direction2;

                // Demander le nombre de joueurs et leurs noms
                demanderNombreDeJoueurs(&nombreJoueurs); // Passage par adresse
                demanderNomsJoueurs(nomsJoueurs, nombreJoueurs);
                afficherNomsJoueurs(nomsJoueurs, nombreJoueurs); // Afficher les noms pour vérification

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
                printf("\nReprise d'une partie sauvegardee (fonctionnalité non encore implémentée).\n");
            break;

            case 3:
                printf("\nAffichage de l'aide (fonctionnalité non encore implémentée).\n");
            break;

            case 4:
                printf("\nAffichage des scores des joueurs (fonctionnalité non encore implémentée).\n");
            break;

            case 5:
                printf("\nMerci d'avoir joue ! A bientot !\n");
            break;

            default:
                printf("\nChoix invalide. Veuillez réessayer.\n");
            break;
        }
    } while (choix != 5);

    return 0;
}
