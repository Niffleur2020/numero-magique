#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int nombre_secret;
    int proposition;
    int trouve = 0;
    int tentatives = 0;

    srand(time(NULL));
    nombre_secret = 42;

    printf("Choisissez un nombre entre 1 et 100.\n");

    while (trouve == 0)
    {
        printf("Entre ta proposition : ");

        if (scanf("%d", &proposition) != 1)
        {
            printf("Saisie invalide. Relance le programme.\n");
            return 1;
        }

        tentatives++;

        if (proposition < nombre_secret)
        {
            printf("C'est plus grand !\n\n");
        }
        else if (proposition > nombre_secret)
        {
            printf("C'est plus petit !\n\n");
        }
        else
        {
            trouve = 1;
            printf("Bravo ! Tu as trouve le nombre magique !\n");
            printf("Nombre de tentatives : %d\n", tentatives);
        }
    }

    return 0;
}
