#include "main.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: pointer an the string
 * @src: pointer an the string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
