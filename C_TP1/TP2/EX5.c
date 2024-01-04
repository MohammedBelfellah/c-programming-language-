// Partie 1 : Afficher dans l'ordre croissant tous les nombres pairs ≤ N
#include <stdio.h>

int main()
{
    int N;

    printf("Veuillez saisir un nombre entier N : ");
    scanf("%d", &N);

    printf("Nombres pairs dans l'ordre croissant jusqu'a %d : ", N);
    for (int i = 0; i <= N; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
// Partie 2 : Afficher dans l'ordre décroissant tous les nombres pairs ≤ N
#include <stdio.h>

int main()
{
    int N;

    printf("Veuillez saisir un nombre entier N : ");
    scanf("%d", &N);

    printf("Nombres pairs dans l'ordre décroissant jusqu'a %d : ", N);
    for (int i = N; i >= 0; i -= 2)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
// Partie 3 : Calculer et afficher la somme de tous les nombres impairs ≤ N
#include <stdio.h>

int main()
{
    int N;
    int sommeImpairs = 0;

    printf("Veuillez saisir un nombre entier N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i += 2)
    {
        sommeImpairs += i;
    }
    printf("La somme des nombres impairs jusqu'a %d est : %d\n", N, sommeImpairs);

    return 0;
}
