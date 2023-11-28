#include <stdio.h>
#include <math.h>
int i, n;
int somme;
int main()
{
    somme = 0;
    printf("enter la valeure de n: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        somme += i;
    }
    printf("la somme est:%d", somme);
    return 0;
}


