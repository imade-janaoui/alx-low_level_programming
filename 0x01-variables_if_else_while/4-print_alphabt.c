#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter ='a';

	while (letter <= 'z')
	{
		if(letter != 'q' && letter != 'e')
			putchar(letter);
	}
	return 0;
}
