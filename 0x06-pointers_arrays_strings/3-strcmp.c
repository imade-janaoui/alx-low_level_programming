#include "main.h"
/**
 * _strcmp - unction that compares two strings.
 * @s1: pointer an the string
 * @s2: pointer an the string
 * Return: Difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
