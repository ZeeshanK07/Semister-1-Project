#include <stdio.h>
#include <math.h> 

int main()
{
    // Programe to find the roots of the given quadratic equation (Using Switch Case statement)

    float a, b, c;
    float r1, r2, imaginary, discriminant;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c)\n");

    printf("Enter the value of a:\t");
    scanf("%f", &a);

    printf("Enter the value of b:\t");
    scanf("%f",&b);

    printf("Enter the value of c:\t");
    scanf("%f",&c);

    discriminant = (b * b) - (4 * a * c);

    printf("\nResults:\n");

    switch(discriminant > 0)
    {
        case 1:
            r1 = (-b + sqrt(discriminant)) / (2 * a);
            r2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("Two distinct and real roots exists: %.2f and %.2f", 
                    r1, r2);
            break;

        case 0:
            switch(discriminant < 0)
            {
                case 1:
                    r1 = r2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);

                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                            r1, imaginary, r2, imaginary);
                    break;

                case 0:
                    r1 = r2 = -b / (2 * a);

                    printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);

                    break;
            }
    }

    return 0;
}