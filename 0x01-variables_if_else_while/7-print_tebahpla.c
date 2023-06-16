#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse.
 * 
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'z';
	
	while (; alphabet >= 'a'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
