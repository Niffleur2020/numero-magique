# Projet Numéro magique

Projet individuel réalisé en langage C.

## Objectif

L'ordinateur choisit un nombre entier aléatoire entre 1 et 100.
Le joueur doit deviner ce nombre.

Après chaque proposition, le programme indique si le nombre
à trouver est plus grand ou plus petit.

La partie se termine lorsque le joueur trouve le bon nombre.

## Compilation

Avec GCC :

```bash
gcc -Wall -Wextra -std=c11 main.c -o numero_magique