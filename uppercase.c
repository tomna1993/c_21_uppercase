#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	//Get string from user
	string s = get_string("Before: ");

	printf("After:  ");

	//Change lowercase letters to uppercase
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			printf("%c", s[i] - 32);
		}
		else
		{
			printf("%c", s[i]);
		}
	}

	printf("\n");
}