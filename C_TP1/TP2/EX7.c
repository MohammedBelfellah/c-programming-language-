// IL Y A UN FAUT BRO .......

#include <stdio.h>

int main()
{
    int n;

    // Demande à l'utilisateur de saisir la valeur de n
    printf("Veuillez saisir la valeur de n : ");
    scanf("%d", &n);

    // Initialisation de u0
    int u = 1;

    // Calcul du nième terme de la suite
    for (int i = 0; i < n; i++)
    {
        u = 2 * (2 * u + 1) / (u + 3);
    }

    // Affichage du résultat
    printf("Le terme u%d de la suite est : %d\n", n, u);

    return 0;
}
