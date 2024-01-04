#include <stdio.h>

int main()
{
    int userInput;

    do
    {
        printf("Entrez un multiple de 7 : ");
        scanf("%d", &userInput);

        if (userInput % 7 != 0)
        {
            printf("Veuillez entrer un multiple de 7.\n");
        }
    } while (userInput % 7 != 0);

    printf("Vous avez saisi un multiple de 7. Merci !\n");

    return 0;
}
