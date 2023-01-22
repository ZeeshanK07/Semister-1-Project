#include <stdio.h>

int main()
{
    // A programe for determining wether userinput is Char, Number or Special Charector

    char a;

    printf("This programe will datermine a userinput\n");
    
    printf("Enter a character:\t");
    scanf("%c", &a);


    if((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
    {
        printf("\n'%c' is alphabet.", a);
    }
    else if(a >= 48 && a <= 57)
    {
        printf("\n'%c' is digit.", a);
    }
    else
    {
        printf("\n'%c' is special character.", a);
    }

    return 0;
}