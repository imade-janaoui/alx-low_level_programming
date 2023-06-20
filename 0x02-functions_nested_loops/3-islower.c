#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character.
 *
 * Return: Alwyas 0
 */

int _islower(int c)
{
	char l_str, u_str;

	for (l_str = 'a'; l_str <= 'z'; l_str++)
	{
		if (l_str == c)
		{
			return (1);
		}
	}

	for (u_str = 'A'; u_str <= 'A'; u_str)
	{
		if (u_str == c)
			return (0);
	}
}
