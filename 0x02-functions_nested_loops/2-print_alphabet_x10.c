#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char str = 'a';

	for (i = 0; i < 10; i++)
	{
		while (str != 'z')
		{
			_putchar(str);
		}
	}
	_putchar('\n');
}
