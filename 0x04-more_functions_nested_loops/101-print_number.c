#include "main.h"

/**
 * print_number - function that prints an integer.
 *
 * @n: variable for test
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int u, i;

	if (n < 0)
	{
		u = -n;
		_putchar('-');
	}
	else
	{
		u = n;
	}

	i = 1000000000;
	do {
		if (i <= u || i == 1)
			_putchar(u / i % 10 + '0');
		i /= 10;
	} while (i != 0);
}
