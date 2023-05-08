#include <cs50.h>
#include <stdio.h>
#include <string.h>

string lowerToUpperCase(string text);

int main(void)
{
	//Get string from user
	string s = get_string("Before: ");

	//Change lowercase letters to uppercase
	//Print out the result
	printf("After:  ");
	printf("%s\n", lowerToUpperCase(s));
}

//Function to change lowercase letters to uppercase in a given text
string lowerToUpperCase(string text)
{
	//Iterate through the string character by character until NUL
	for (int i = 0; i < strlen(text); i++)
	{
		//Characters between 'a' and 'z' are lowercase
		if (text[i] >= 'a' && text[i] <= 'z')
		{
			//Add 32 to the lowercase character to convert it to uppercase
			text[i] -= 32;
		}
	}

	return text;
}