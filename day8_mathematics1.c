#include <stdio.h>
#include <math.h>
//  find the roots of a quadratic equation

int main()
{
    float a, b, c, D, R1, R2, real, imaginary;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("\n");
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        R1 = (-b + sqrt(D)) / (2 * a);
        R2 = (-b - sqrt(D)) / (2 * a);
        printf("Root1 = %.2f and Root2 = %.2f", R1, R2);
    }

    else if (D == 0)
    {
        R1 = R2 = -b / (2 * a);
        printf("Root1 = Root2 = %.2f;", R1);
    }

    else
    {
        real = -b / (2 * a);
        imaginary = sqrt(-D) / (2 * a);
        printf("Root1 = %.2f+%.2fi and Root2 = %.2f-%.2fi", real, imaginary, real, imaginary);
    }

    return 0;
}
