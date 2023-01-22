#include<stdio.h>
int factorial(int f);

int main()
{
    // This programe is for printing the factorial number of a given number by user using a function

    int a;

    printf("Enter a number to find the Factorial number: \t");
    scanf("%d",&a);

    // Calling factorial function in print statement so that it can print in the main funciton
    printf("The Factorial of %d is %d",a,factorial(a)); 

    return 0;
}

int factorial(int f){

    // Finding the factorial number of the userinput

    int fact=1;

        for (int i = 1; i <= f; i++)
        {
            fact = fact * i;
        }

    return fact;   
}