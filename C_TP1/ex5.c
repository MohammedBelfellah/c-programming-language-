// 1.1
#include <stdio.h>

int main()
{
    int N;

    // Demander à l'utilisateur de saisir un nombre entier N
    printf("Entrez un nombre entier N : ");
    scanf("%d", &N);

    // Afficher les nombres pairs jusqu'à N dans l'ordre croissant
    printf("Nombres pairs jusqu'a %d dans l'ordre croissant :\n", N);
    for (int i = 2; i <= N; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}

// 1.2
#include <stdio.h>

int main()
{
    int N;

    // Demander à l'utilisateur de saisir un nombre entier N
    printf("Entrez un nombre entier N : ");
    scanf("%d", &N);

    // Afficher les nombres pairs jusqu'à N dans l'ordre décroissant
    printf("Nombres pairs jusqu'a %d dans l'ordre décroissant :\n", N);
    for (int i = N; i >= 2; i -= 2)
    {
        printf("%d\n", i);
    }

    return 0;
}

// 1.3
#include <stdio.h>

int main()
{
    int N;
    int somme = 0;

    // Demander à l'utilisateur de saisir un nombre entier N
    printf("Entrez un nombre entier N : ");
    scanf("%d", &N);

    // Calculer et afficher la somme des nombres impairs jusqu'à N
    for (int i = 1; i <= N; i += 2)
    {
        somme += i;
    }

    printf("La somme des nombres impairs jusqu'a %d est : %d\n", N, somme);

    return 0;
}
