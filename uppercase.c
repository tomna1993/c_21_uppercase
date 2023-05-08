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
	for (int i = 0, length = strlen(s); i < length; i++)
	{
		printf("%c", toupper(s[i]));
	}

	printf("\n");
}