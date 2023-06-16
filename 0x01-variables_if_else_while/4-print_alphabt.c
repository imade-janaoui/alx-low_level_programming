#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase
 *
 * Return : Always 0
 */
int main(void)
{
	char alphabet ='a';

	for (;alphabet <= 'z';alphabet++)
	{
		if(alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}
	printf("\n");
	return 0;
}
