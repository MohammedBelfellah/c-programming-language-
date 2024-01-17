#include <stdio.h>

int sommeChiffres(int nombre)
{
    int somme = 0;
    while (nombre > 0)
    {
        somme += nombre % 10;
        nombre /= 10;
    }
    return somme;
}

int main()
{
    printf("Nombres entiers de trois chiffres divisibles par la somme de leurs chiffres :\n");

    for (int nombre = 100; nombre <= 999; nombre++)
    {
        int somme = sommeChiffres(nombre);
        if (somme != 0 && nombre % somme == 0)
        {
            printf("%d\n", nombre);
        }
    }

    return 0;
}
