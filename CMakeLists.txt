cmake_minimum_required(VERSION 3.29)
project(projet_corridor_ C)

set(CMAKE_C_STANDARD 11)

add_executable(projet_corridor_ main.c
        header.h
        initialiserPlateau.c
        afficherPlateau.c
        deplacerPion.c
        deplacerPion2.c
        demanderNombreDeJoueurs.c
        demanderNomsJoueurs.c
        afficherNomsJoueurs.c
        menu.c
)
