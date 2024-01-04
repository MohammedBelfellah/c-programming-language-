#include <stdio.h>

int main()
{
    int nombre;

    do
    {
        printf("Veuillez saisir un nombre (multiple de 7) : ");
        scanf("%d", &nombre);

        if (nombre % 7 != 0)
        {
            printf("Le nombre saisi n'est pas un multiple de 7. Veuillez réessayer.\n");
        }

    } while (nombre % 7 != 0);

    printf("Vous avez saisi un multiple de 7. Merci!\n");

    return 0;
}
