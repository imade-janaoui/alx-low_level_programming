#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char c[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
