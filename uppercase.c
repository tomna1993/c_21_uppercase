#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	//Get string from user
	string s = get_string("Before: ");

	printf("After:  ");

	//Change lowercase letters to uppercase
	for (int i = 0; i < strlen(s); i++)
	{
		s[i] = toupper(s[i]);
		printf("%c", s[i]);
	}

	printf("\n");
}