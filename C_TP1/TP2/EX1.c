#include <stdio.h>

int main()
{
    // Déclaration de la variable pour stocker le nombre entier N
    int N;

    // Demande à l'utilisateur de saisir un nombre entier
    printf("Veuillez saisir un nombre entier N : ");
    scanf("%d", &N);

    // 1. Vérification en considérant le reste de la division de N par 2
    if (N % 2 == 0)
    {
        printf("%d est un nombre pair .\n", N);
    }
    else
    {
        printf("%d est un nombre impair .\n", N);
    }

    // 2. Vérification en considérant le chiffre des unités de N
    int unite = N % 10;
    if (unite % 2 == 0)
    {
        printf("Le chiffre des unités de %d est pair.\n", N);
    }
    else
    {
        printf("Le chiffre des unités de %d est impair.\n", N);
    }

    return 0;
}
