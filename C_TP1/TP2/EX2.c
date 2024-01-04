#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Veuillez saisir la longueur du A cote du triangle : ");
    scanf("%d", &a);

    printf("Veuillez saisir la longueur du B cote du triangle : ");
    scanf("%d", &b);

    printf("Veuillez saisir la longueur du C cote du triangle : ");
    scanf("%d", &c);

    if (a == b && b == c)
    {
        printf("Le triangle est equilateral.\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Le triangle est isocele.\n");
    }
    else
    {
        printf("Le triangle est scalene.\n");
    }

    return 0;
}
