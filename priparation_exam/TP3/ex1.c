#include <stdio.h>
int main()
{
    int T[10], i, j;
    printf("entre les elemants de la tableu T:\n ");
    for (i = 0; i < 10; i++)
    {
        printf("T[%d]=", i + 1);
        scanf("%d", &T[i]);
    }
    // trer le tableau
    for (i = 0; i < 10 - 1; i++) 
    {
        for (j = 0; j < 10 - i - 1; j++) 
        {
            if (T[j] > T[j+1]) 
            {
                int PG = T[j];
                T[j] = T[j+1];
                T[j+1] = PG;
            }
        }
    }
    printf("\nEléments du tableau en ordre croissant :\n");
    for (i = 0; i < 10; i++)
    {
        printf("T[%d]= %d\n", i + 1, T[i]);
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int T[10], i, j;
//     printf("entre les elemants de la tableu T:\n ");
//     for (i = 0; i < 10; i++)
//     {
//         printf("T[%d]=", i + 1);
//         scanf("%d", &T[i]);
//     }
//     // trer le tableau
//     for (i = 0; i < 10 - 1; i++)
//     {
//         for (j = 0; j < 10 - i - 1; j++)
//         {
//             if (T[j] < T[j + 1]) 
//             {
//                 int PG = T[j];
//                 T[j] = T[j + 1];
//                 T[j + 1] = PG;
//             }
//         }
//     }
//     printf("\nEléments du tableau en ordre croissant :\n");
//     for (i = 0; i < 10; i++)
//     {
//         printf("T[%d]= %d\n", i + 1, T[i]);
//     }
//     return 0;
// }