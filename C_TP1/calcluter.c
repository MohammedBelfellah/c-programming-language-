#include <stdio.h>
#include <math.h>
#include <complex.h>

int main()
{
    // Coefficients of the quadratic equation: ax^2 + bx + c = 0
    double a, b, c;

    printf("Enter the coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    double complex disc = cpow(b, 2) - 4 * a * c;

    // Calculate the roots of the quadratic equation
    double complex root1 = (-b + csqrt(disc)) / (2 * a);
    double complex root2 = (-b - csqrt(disc)) / (2 * a);

    // Display the roots
    printf("Solustion 1: %.2f + %.2fi\n", creal(root1), cimag(root1));
    printf("Solusyion 2: %.2f + %.2fi\n", creal(root2), cimag(root2));

    return 0;
}
