#include "main.h"
/**
 * string_toupper - function that changes
 * all lowercase letters of a string to uppercase
 * @a: pointer an the string
 * Return: string
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (*(a + i) != '\0')
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
		{
			*(a + i) = *(a + i) - 32;
		}
		i++;
	}
	return (a);
}
