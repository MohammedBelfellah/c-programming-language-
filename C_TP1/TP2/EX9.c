#include <stdio.h>

int main()
{
    int N;

    // Demande à l'utilisateur de saisir un nombre N < 10
    do
    {
        printf("Veuillez saisir un nombre N (< 10) : ");
        scanf("%d", &N);

        if (N >= 10)
        {
            printf("Le nombre doit être strictement inférieur à 10. Réessayez.\n");
        }

    } while (N >= 10);

    // Affichage du motif
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
