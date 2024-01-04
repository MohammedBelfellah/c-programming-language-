#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Veuillez saisir le coefficient a : ");
    scanf("%f", &a);

    printf("Veuillez saisir le coefficient b : ");
    scanf("%f", &b);

    printf("Veuillez saisir le coefficient c : ");
    scanf("%f", &c);

    float discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        float x1 = (-b + sqrt(discriminant)) / (2 * a);
        float x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Deux solutions reelles distinctes : x1 = %.2f et x2 = %.2f\n", x1, x2);
    }
    else if (discriminant == 0)
    {
        float x = -b / (2 * a);
        printf("Une solution reelle (double) : x = %.2f\n", x);
    }
    else
    {
        printf("Pas de solution reelle.\n");
    }

    return 0;
}
