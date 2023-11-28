#include <stdio.h>
#include <stdlib.h>

long int id_f;
char vill[20];
char produit[20];
float qte, prix, tva, total, remise, ttc;
char mode[20];

int main()
{
    printf("Saisir l'ID fournisseur: ");
    scanf("%ld", &id_f);

    printf("Saisir la ville du fournisseur: ");
    scanf("%s", vill);

    printf("Saisir le produit: ");
    scanf("%s", produit);

    printf("Saisir le mode de paiement: ");
    scanf("%s", mode);

    printf("Saisir le prix du produit: ");
    scanf("%f", &prix);

    printf("Saisir la quantité du produit: ");
    scanf("%f", &qte);

    total = qte * prix;
    tva = total * 0.2;

    if (total >= 5000)
    {
        remise = total * 0.3;
        ttc = total - remise;
        printf("#############################\n");
        printf("Total: %.2f\n", total);
        printf("TVA: %.2f\n", tva);
        printf("Remise: %.2f\n", remise);
        printf("TTC: %.2f\n", ttc);
    }
    else
    {
        ttc = total + tva;
        printf("################################\n");
        printf("Total: %.2f\n", total);
        printf("TVA: %.2f\n", tva);
        printf("TTC: %.2f\n", ttc);
    }

    return 0;
}
