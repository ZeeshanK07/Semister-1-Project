#include <stdio.h>
#include <string.h>

void check(char *str, char *rev){

	//This function will check the string to confirm if the string is palindrome or not

	if(strcmp(rev,str) == 0)
		printf("\n%s is palindrome!\n", str);
	else
		printf("\n%s is not palindrome!\n", str);

}

int main(){

    // Programe to check if a string is palindrome or not

	char str[100], tmp, rev[100];
	int start, stop;
	
	printf("Enter string: ");
	scanf("%s", &str);

    strlwr(str); // used this function to convert all string into lowercase
	
	strcpy(rev,str);
	
	//reversing the string using while loops

	start = 0;
	stop = strlen(str) - 1;	//-1 because last character is NULL \0
	while(start < stop){
		tmp = str[start];
		str[start] = str[stop];
		str[stop] = tmp;
		start++;
		stop--;
	}
	
	//output
	printf("Reverse string: %s\n", str);

    check(str,rev);
	
	return 0;
}