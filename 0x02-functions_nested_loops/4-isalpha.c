#include "main.h"

/**
 * _isalpha - Write a function that checks for lowercase character.
 *
 * @c: variable to test
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
