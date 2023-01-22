#include <stdio.h>
void check(char *a);
 
int main()
{
    // Programe to find the length of the string
    
    char string[50];
 
    // input the string
    printf("Enter the string to check the length of the string: \t");
    gets(string);

    check(string);

    return 0;
}

void check(char *a){
    // Function for checking the length of the string

    int length = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of the entered string is = %d\n", length);

}