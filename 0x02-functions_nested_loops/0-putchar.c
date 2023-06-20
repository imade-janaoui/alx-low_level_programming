#include "main.h"

/**
 * main - Write a program that prints _putchar
 *
 *Return: Always 0
 */

int main(void)
{
	char c[9] = {'_','p','u','t','c','h','a','r'};
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
