#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char str;

	for (i = 0; i < 10; i++)
	{
		for (str = 'a'; str <= 'z'; str++)
		{
			_putchar(str);
		}
	}
	_putchar('\n');
}
