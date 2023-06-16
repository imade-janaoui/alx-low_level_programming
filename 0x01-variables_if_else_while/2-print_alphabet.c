#include <stdio.h>

/* more headers goes there */
/**
 * main - Write a program that prints the alphabet in lowercase
 *
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z'){
		putchar(alphabet);
		letter++;
	}
	putchar('\n');

	return 0;
}
