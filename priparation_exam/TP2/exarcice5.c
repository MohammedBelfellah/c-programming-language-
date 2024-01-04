#include <stdio.h>
// int N, i;

// int main()
// {
//     printf("donner un nombre N:");
//     scanf("%d", &N);
//     for (i = 0; i <= N; i = i + 2)
//     {
//         printf("%d \n", i);

//     }
//     return 0;
// }

// int N, i;

// int main()
// {
//     printf("donner un nombre N:");
//     scanf("%d", &N);

//     if ((N % 2) == 0)
//     {
//         for (i = N; i>= 0; i = i - 2)
//         {
//             printf("%d \n", i);
//         }
//     }
//     else
//     {
//         for (i = N - 1; i >= 0; i = i - 2)
//         {
//             printf("%d \n", i);
//         }
//     }
//     return 0;
// }

// int N, i, j;

// int main()
// {
//     printf("donner un nombre N:");
//     scanf("%d", &N);

//     for (i = N; i >= 0; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i)
    {
        // Print spaces
        for (int space = 1; space <= rows - i; ++space)
        {
            printf("  ");
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
