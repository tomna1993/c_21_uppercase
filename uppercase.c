#include <cs50.h>
#include <stdio.h>

int main(void)
{
	//Get string from user
	string name = get_string("What's your name? ");

	//Change lowercase letters to uppercase
	//Iterate through the string character by character until NUL
	int n = 0;
	
	while (name[n] != '\0')
	{
		//Characters between 'a' and 'z' are lowercase
		if (name[n] >= 'a' && name[n] <= 'z')
		{
			//Add 32 to the lowercase character to convert it to uppercase
			name[n] -= 32;
		}

		n++;
	}

	//Print out the result
	printf("%s\n", name);
}