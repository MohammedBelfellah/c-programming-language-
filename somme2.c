#include <stdio.h>
#include <math.h>
int i, n, x;
int somme;
int main()
{
    somme = 0;
    printf("enter la valeure de n: \n");
    scanf("%d", &n);
    printf("enter la valeure de x: \n");
    scanf("%d", &x);
    for (i = 1; i <= n; i++)
    {
        somme += pow(x, i);
    }
    printf("la somme est:%d", somme);
    return 0;
}