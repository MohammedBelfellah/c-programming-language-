#include <stdio.h>
#include <math.h>
float a, b, c;
int main()
{
    printf("enter la valeur de a : ");
    scanf("%f", &a);
    printf("enter la valeur de b : ");
    scanf("%f", &b);
    printf("enter la valeur de c : ");
    scanf("%f", &c);
    float dlt = b * b - 4 * a * c;
    if (dlt > 0)
    {
        float x1 = (-b + sqrt(dlt)) / (2 * a);
        float x2 = (-b - sqrt(dlt)) / (2 * a);
        printf("Deux solutions reelles distinctes x1 = %f et x2 = %f\n", x1, x2);
    }
    else if (dlt == 0)
    {
        float x1 = (-b) / (2 * a);
        printf("Une solution reelle x = %f \n", x1);
    }
    else
    {
        printf("le dlta c'est nigative");
    }

    return 0;
}
