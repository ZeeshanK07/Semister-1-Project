#include<stdio.h>  
  
void swap(int *x, int *y)  
{ 
    // This function will swap the numbers 

    int temp;  
  
    temp = *x;  
    *x   = *y;  
    *y   = temp;  
}  
  
int main()  
{ 
    // This programe is for swaping two numbers using pointers

    int a, b;  
  
    printf("Enter the first number:\t");  
    scanf("%d",&a);

    printf("Enter the second number:\t");
    scanf("%d",&b);
  
    printf("\n\nNumbers before swapping: a = %d and b = %d\n", a, b);  
  
    swap(&a, &b);  
  
    printf("\nNumbers after swapping: a = %d and b = %d\n", a, b);  
  
    return 0;  
}  
  