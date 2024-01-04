#include <stdio.h>
#include <math.h>
int tableau6[10];
int main()
{
    printf("\nSaisissez les 10 nombres entiers du tableau :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &tableau6[i]);
    }
    int estTrie = 1;
    for (int i = 0; i < 9; i++)
    {
        if (tableau6[i] > tableau6[i + 1])
        {
            estTrie = 0;
            break;
        }
    }
    if (estTrie)
    {
        printf("Le tableau est trié dans l'ordre croissant.\n");
    }
    else
    {
        printf("Le tableau n'est pas trié dans l'ordre croissant.\n");
    }
    return 0;
}
