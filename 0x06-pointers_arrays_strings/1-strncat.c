#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer an the string
 * @src: pointer an the string 
 * @n: pointer an the intger
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
