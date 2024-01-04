#include <stdio.h>

// Fonction pour calculer le nième terme de la séquence
double calculerTerme(int n)
{
    if (n == 0)
    {
        return 1; // u0 est défini comme 1
    }
    else
    {
        // Formule récursive pour la séquence
        return 2 * (2 * calculerTerme(n - 1) + 1) / (calculerTerme(n - 1) + 3);
    }
}

int main()
{
    int n;

    // Boucle de validation de l'entrée
    do
    {
        printf("Entrez la valeur de n (n >= 0) : ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Veuillez entrer une valeur non négative pour n.\n");
        }
    } while (n < 0);

    // Calculer et imprimer le nième terme de la séquence
    double resultat = calculerTerme(n);
    printf("Le terme %d de la séquence est : %lf\n", n, resultat);

    return 0;
}
