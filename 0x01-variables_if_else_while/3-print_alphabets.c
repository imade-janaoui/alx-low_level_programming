#include <stdio.h>

/**
 * main - Write a program that prints the alphabet
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);

	}

	for (c = 'A' ; c <= 'Z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
