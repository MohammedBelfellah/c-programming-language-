//
#include <stdio.h>
#include <math.h>
// EXERCICE 1:
// int main(){
//     int a;
//     printf("Saisir un entier : ");
//     scanf("%d", &a);
//     if (a % 2 == 0)
//     {
//         printf("%d est un nombre pair.\n", a);
//     }
//     else
//     {
//         printf("%d est un nombre impair.\n", a);
//     }
//     return 0;
// }
// // EXERCICE 2:
// int main()
// {
//     int cote1, cote2, cote3;
//     printf("Saisir la longueur du premier cote : ");
//     scanf("%d", &cote1);
//     printf("Saisir la longueur du deuxieme cote : ");
//     scanf("%d", &cote2);
//     printf("Saisir la longueur du troisieme cote : ");
//     scanf("%d", &cote3);
//     if (cote1 == cote2 && cote2 == cote3)
//     {
//         printf("Le triangle est equilateral.\n");
//     }
//     else if (cote1 == cote2 || cote1 == cote3 || cote2 == cote3)
//     {
//         printf("Le triangle est isocele.\n");
//     }
//     else
//     {
//         printf("Le triangle est scalene.\n");
//     }
//     return 0;
// }
// // EXERCICE 3:
// void resoudreEquation(float a, float b, float c)
// {
//     float delta = b * b - 4 * a * c;
//     if (delta == 0)
//     {
//           float solution = -b / (2 * a);
//         printf("La solution de l'equation est : %f\n", solution);
//     }
//     else if (delta > 0)
//     {
//         float solution1 = (-b + sqrt(delta)) / (2 * a);
//         float solution2 = (-b - sqrt(delta)) / (2 * a);
//         printf("Les solutions de l'equation sont : %f et %f\n", solution1, solution2);
//     }
//     else
//     {
//         float reelPart = -b / (2 * a);
//         float imaginairePart = sqrt(-delta) / (2 * a);
//         printf("Les solutions de l'equation sont : %f + %fi et %f - %fi\n", reelPart, imaginairePart,
//                reelPart, imaginairePart);
//     }
// }
// int main()
// {
//     float a, b, c;
//     printf("Entrez le coefficient a : ");
//     scanf("%f", &a);
//     printf("Entrez le coefficient b : ");
//     scanf("%f", &b);
//     printf("Entrez le coefficient c : ");
//     scanf("%f", &c);
//     resoudreEquation(a, b, c);
//     return 0;
// }
// // EXERCICE 4:
// void afficherNomSurBillet(int montant)
// {
//     switch (montant)
//     {
//     case 1:
//         printf("George Washington\n");
//         break;
//     case 2:
//         printf("Thomas Jefferson\n");
//         break;
//     case 5:
//         printf("Abraham Lincoln\n");
//         break;
//     case 10:
//         printf("Alexander Hamilton\n");
//         break;
//     case 20:
//         printf("Andrew Jackson\n");
//         break;
//     case 50:
//
//             printf("Ulysses S. Grant\n");
//         break;
//     case 100:
//         printf("Benjamin Franklin\n");
//         break;
//     default:
//         printf("Montant non valide\n");
//         break;
//     }
// }
// int main()
// {
//     int montant;
//     printf("Entrez le montant du billet de banque : ");
//     scanf("%d", &montant);
//     afficherNomSurBillet(montant);
//     return 0;
// }
// // EXERCICE 5:
// // QUESTION 1:
// int main()
// {
//     int N, i;
//     printf("Entrez un nombre entier N : ");
//     scanf("%d", &N);
//     printf("Nombres pairs jusqu'a %d : ", N);
//     for (i = 0; i <= N; i += 2)
//     {
//         printf("%d ", i);
//     }
//     return 0;
// }
// // QUESTION 2:
// int main()
// {
//     int N;
//     printf("Entrez un nombre entier N : ");
//     scanf("%d", &N);
//     if (N % 2 != 0)
//     {
//         N--;
//     }
//
//         printf("Nombres pairs jusqu'a %d en ordre décroissant : ", N);
//     for (int i = N; i >= 0; i -= 2)
//     {
//         printf("%d ", i);
//     }
//     return 0;
// }
// // QUESTION 3:
// int main()
// {
//     int N, somme = 0;
//     printf("Entrez un nombre entier N : ");
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i += 2)
//     {
//         somme += i;
//     }
//     printf("La somme des nombres impairs jusqu'a %d est : %d\n", N, somme);
//     return 0;
// }
// // EXERCICE 6:
// int main()
// {
//     int nombre;
//     do
//     {
//         printf("Entrez un nombre (multiple de 7) : ");
//         scanf("%d", &nombre);
//         if (nombre % 7 != 0)
//         {
//             printf("Veuillez entrer un multiple de 7.\n");
//         }
//     } while (nombre % 7 != 0);
//     printf("Vous avez saisi un multiple de 7 : %d\n", nombre);
//     return 0;
// }
// // EXERCICE 7:
// double calculerTerme(int n)
// {
//     if (n == 0)
//     {
//         return 1; // Terme initial u0
//     }
//     else
//     {
//           double un = calculerTerme(n - 1);
//         return 2 * (2 * un + 1) / (un + 3);
//     }
// }
// int main()
// {
//     int n;
//     printf("Entrez la valeur de n : ");
//     scanf("%d", &n);
//     double resultat = calculerTerme(n);
//     printf("Le terme u%d de la suite est : %lf\n", n, resultat);
//     return 0;
// }
// // EXERCICE 8:
// int sommeChiffres(int nombre)
// {
//     int somme = 0;
//     while (nombre > 0)
//     {
//         somme += nombre % 10;
//         nombre /= 10;
//     }
//     return somme;
// }
// int main()
// {
//     printf("Nombres entiers de trois chiffres divisibles par la somme de leurs chiffres :\n");
//     for (int i = 100; i < 1000; ++i)
//     {
//         int somme = sommeChiffres(i);
//         if (i % somme == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }
// EXERCICE 9:
int main()
{
    int N;
    printf("Entrez un nombre N (N < 10) : ");
    scanf("%d", &N);
    if (N >= 10)
    {
        printf("Le nombre doit être strictement inférieur à 10.\n");
        return 1;
    }
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}