#include <stdio.h>
#include "main.h"

/**
 * main - The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081
 *
 * Return: Always 0
 */
int main(void)
{
	int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int prim;

	prim = 3;
	while (prim < num / 2)
	{
		if ((num % prim) == 0)
		{
			if((prim % 3) == 2)
				printf(",%lu ", prim);
		}

		prim+=2;
	}

	putchar('\n');
	return (0);
}
