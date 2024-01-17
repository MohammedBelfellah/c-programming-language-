#include <stdio.h>
int main()
{
    int T[10], i, somme, moyenne;
    printf("entre les elemants de la tableu T:\n ");
    for (i = 0; i < 10; i++)
    {
        printf("T[%d]=", i + 1);
        scanf("%d", &T[i]);
    }
    somme = 0;
    for (i = 0; i < 10; i++)
    {
        somme += T[i];
    }
    moyenne = somme / 10;
    printf("\nLa somme c'est :%d ,le moyenne:%d\n", somme, moyenne);
    return 0;
}