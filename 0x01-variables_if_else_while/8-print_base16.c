#include <stdio.h>
/**
 * main - Write a program that prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
    int i;
    char alphabet;

    for (i = 0; i < 10; i++)
	    putchar(( i% 10) + '0');

    for (alphabet = 'a'; alphabet <= 'f' ; alphabet++)
	    putchar(alphabet);
    putchar('\n');

    return 0;
}
