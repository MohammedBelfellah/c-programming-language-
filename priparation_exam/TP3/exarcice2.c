#include <stdio.h>
int main()
{
    int T[10], i, j;
    int PG,rong;
    printf("entre les elemants de la tableu T:\n ");
    for (i = 0; i < 10; i++)
    {
        printf("T[%d]=", i + 1);
        scanf("%d", &T[i]);
    }
    for (i = 0; i < 10; i++)
    {
        PG = T[0];
        if (T[i] >= PG)
        {
            PP=T[i];
            rong = i;
        }
    }
    // afficharge bro pour PG
    printf("\nle plus grand elemant du tableua c'est %d sont rong %d dans le tbleu",PP,rong+1);

}
// #include <stdio.h>
// int main()
// {
//     int T[10], i, j;
//     int PP, rong;
//     printf("entre les elemants de la tableu T:\n ");
//     for (i = 0; i < 10; i++)
//     {
//         printf("T[%d]=", i + 1);
//         scanf("%d", &T[i]);
//     }
//     for (i = 0; i < 10; i++)
//     {
//         PP = T[0];
//         if (T[i] <= PP)
//         {
//             PP = T[i];
//             rong = i;
//         }
//     }
//     // afficharge bro pour PP
//     printf("\nle plus petit elemant du tableua c'est %d sont rong %d dans le tbleu", PP, rong + 1);
// }