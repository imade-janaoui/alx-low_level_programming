#include <stdio.h>

/**
 *main - Prints the alphabet in owercase, and then in uppercase, followed by a new line.
 *
 *
 * Return: Always 0.
 */

int main(void){
	char letter ='a';
	char _letter = 'A';

	while(letter <= 'z')
	{
		putchar(letter);
	}
	while(_letter <= 'Z')
	{
		putchar(_letter);
	}
	putchar('\n');

	return 0;
}
