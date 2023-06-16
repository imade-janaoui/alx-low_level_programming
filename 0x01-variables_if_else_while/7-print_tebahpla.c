#include <stdio.h>

/**
 *
 * main - Write a program that prints the lowercase alphabet in reverse.
 *
 * Return, Allways 0
 */

int main(void)
{
    char letter = 'z';
    while (letter >='a')
    {
     putchar(letter);
    letter--;
    }
	putchar('\n');


    return 0;
}
