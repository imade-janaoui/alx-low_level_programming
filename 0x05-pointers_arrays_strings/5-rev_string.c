#include "main.h"
/**
 * rev_string -  function that reverses a string.
 * @s: pointer an the char
 *
 * Return: void
 */
void rev_string(char *s);
{
	int i, j , lent;

	lent = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		lent++;
	}
	for (j = lent - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
