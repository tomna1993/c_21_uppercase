#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	//Get string from user
	string s = get_string("Before: ");

	printf("After:  ");

	//Change lowercase letters to uppercase and print the letter
	//Iterate through the string character by character
	for (int i = 0, length = strlen(s); i < length; i++)
	{
		//toupper does not change a character if it is already uppercase
		printf("%c", toupper(s[i]));
	}

	printf("\n");
}