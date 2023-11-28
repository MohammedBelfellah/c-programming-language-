#include <stdio.h>
#include <math.h>

char nom[20];
char prenom[20];
char addrese[20];
char email[20];

int main()
{
    printf("enter votre nom \n");
    scanf("%s", &nom);
    printf("enter votre prenom \n");
    scanf("%s", &prenom);
    printf("enter votre email \n");
    scanf("%s", &email);
    printf("enter votre addrese \n");
    scanf("%s", &addrese);
    printf("votre nom est %s:\n", nom);
    printf("votre prenom est %s:\n", prenom);
    printf("votre addrese est %s:\n", addrese);
    printf("votre email est %s:\n", email);
    return 0;
}