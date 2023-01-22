#include <stdio.h>
 
int main()
{
    // Programe to find GCD and LCM of a given number

    int a, b, gcd, lcm, rem, num, deno;

    printf("GCD and LCM finder for 2 numbers\n\n");
 
    printf("Enter first number:\t");
    scanf("%d", &a);

    printf("Enter second number:\t");
    scanf("%d", &b);
 
    num = (a>b)?a:b;
    deno = (a<b)?a:b;
    rem = num % deno;

     while (rem != 0)
    {
        num   = deno;
        deno = rem;
        rem   = num % deno;
    }
    gcd = deno;
    lcm = a * b / gcd;

    printf("\nResults:\n");
    printf("GCD of %d and %d = %d\n", a, b, gcd);
    printf("LCM of %d and %d = %d\n", a, b, lcm);

    return 0;
}