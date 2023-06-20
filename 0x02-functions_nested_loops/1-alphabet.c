#include "main.h"
/**
 * main - Write a function that prints the alphabet, in lowercase.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

