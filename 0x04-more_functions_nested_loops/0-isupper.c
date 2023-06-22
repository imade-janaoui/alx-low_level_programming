#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 *
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char crt;
	int isupper;

	for (crt = 'A'; crt <= 'Z'; crt++)
	{
		if (c == crt)
		{
			isupper = 1;
		
		}
		else
			isupper = 0;
	}

	return (isupper);
}
