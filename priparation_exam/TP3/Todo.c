
// TO DO
#include <stdio.h>

int main()
{
    int T[10], i, temp;

    // Saisie des éléments du tableau par l'utilisateur
    printf("Veuillez saisir 10 nombres entiers :\n");
    for (i = 0; i < 10; i++)
    {
        printf("T[%d] : ", i + 1);
        scanf("%d", &T[i]);
    }

    // Renverse l'ordre des éléments du tableau
    for (i = 0; i < 10 / 2; i++)
    {
        // Échange des éléments symétriques par rapport au centre du tableau
        temp = T[i];
        T[i] = T[9 - i];
        T[9 - i] = temp;
    }

    // Affichage des éléments du tableau après inversion
    printf("\nEléments du tableau après inversion :\n");
    for (i = 0; i < 10; i++)
    {
        printf("T[%d] : %d\n", i + 1, T[i]);
    }

    return 0;
}
