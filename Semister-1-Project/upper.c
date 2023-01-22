#include<stdio.h>
#include<string.h>

void convert(char *a);

int main()
{
    // This programe is used to convert all the userinput into uppercase
    char input[50];
    printf("Enter a statement:\t");
    gets(input);

    printf("User input is: %s \n",input);

    convert(input);

    return 0;
}

void convert(char *a){
    // This function is used to convert and print the given string into uppercase

    for (int i = 0; a[i]!='\0'; i++) 
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
          a[i] = a[i] -32;
        }
    }
    printf("After converted to uppercase: %s",a);
}