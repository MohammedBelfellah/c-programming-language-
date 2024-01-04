#include <stdio.h>

// int main()

// {
//     int A[4][6], T[6][4];
//     int i, j;
//     printf("Veuilles saisir les elements de la matrice A:\n");
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 6; j++)
//         {
//             printf("T[%d][[%d]= ", i, j);
//             scanf("%d", &A[i][j]);
//         }
//     }
//     // calcule de transposer
//     for (i = 0; i < 6; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             T[i][j] = A[j][i];
//         }
//     }
//     // Afficahrge des matrices A est sont tronsposer T
//     printf("le Matrice A:\n");
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 6; j++)
//         {
//             printf("%d\t", A[i][j]);
//         }
//         printf("\n");
//     }
//     printf("le Matrice T:\n");
//     for (i = 0; i < 6; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             printf("%d\t", T[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main()
{
    int N, i, j;
    printf("Entre lordre de la matrice A et B:\n");
    scanf("%d", &N);

    int A[N][N], B[N][N];
    printf("La Matrice A :\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("A[%d][%d]=", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("La Matrice B :\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("B[%d][%d]=", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    // afficharge de la matrice A et B
    // matrice A
    printf("Votre matrice A:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    // matrice B
    printf("Votre matrice B:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
}