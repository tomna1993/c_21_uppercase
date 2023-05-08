#include <cs50.h>
#include <stdio.h>

string lowerToUpperCase(string text);

int main(void)
{
	//Get string from user
	string name = get_string("What's your name? ");

	//Change lowercase letters to uppercase
	//Print out the result
	printf("%s\n", lowerToUpperCase(name));
}

//Function to change lowercase letters to uppercase in a given text
string lowerToUpperCase(string text)
{
	int n = 0;

	//Iterate through the string character by character until NUL
	while (text[n] != '\0')
	{
		//Characters between 'a' and 'z' are lowercase
		if (text[n] >= 'a' && text[n] <= 'z')
		{
			//Add 32 to the lowercase character to convert it to uppercase
			text[n] -= 32;
		}

		n++;
	}

	return text;
}