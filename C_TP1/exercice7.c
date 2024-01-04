#include <stdio.h>
#include <math.h>
int tableau6[10];
int main()
{
    int N;
    printf("\nEntrez l'ordre des matrices carrees (N) : ");
    scanf("%d", &N);
    int A[N][N], B[N][N], somme[N][N], difference[N][N], produitScalaire[N][N], produit[N][N];
    int traceA = 0;
    // Lecture des matrices A et B
    printf("\nEntrez les elements de la matrice A :\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
            traceA += (i == j) ? A[i][j] : 0;
        }
    }
    printf("\nEntrez les elements de la matrice B :\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("B[%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    // Affichage des matrices A et B
    printf("\nMatrice A :\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrice B :\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    // Calcul de la somme des matrices A et B
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            somme[i][j] = A[i][j] + B[i][j];
        }
    }
    // Calcul de la différence des matrices A et B
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            difference[i][j] = A[i][j] - B[i][j];
        }
    }
    // Calcul du produit par un scalaire des matrices A et B
    int scalaire;
    printf("\nEntrez le scalaire pour le produit : ");
    scanf("%d", &scalaire);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            produitScalaire[i][j] = scalaire * A[i][j];
        }
    }
    // Calcul du produit des matrices A et B
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            produit[i][j] = 0;
            for (int k = 0; k < N; k++)
            {
                produit[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Affichage des résultats
    printf("\nSomme des matrices A et B :\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", somme[i][j]);
        }
        printf("\n");
    }
    printf("\nDifference des matrices A et B :\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }
    printf("\nProduit par un scalaire des matrices A et B :\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", produitScalaire[i][j]);
        }
        printf("\n");
    }
    printf("\nProduit des matrices A et B :\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", produit[i][j]);
        }
        printf("\n");
    }
    printf("\nTrace de la matrice A : %d\n", traceA);
    printf("\nTransposee de la matrice B :\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", B[j][i]);
        }
        printf("\n");
    }
    return 0;
}
