#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: pointer an the string
 * @src: pointer an the string
 * @n: size of dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
