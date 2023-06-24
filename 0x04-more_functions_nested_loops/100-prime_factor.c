#include <stdio.h>

/**
 * main - The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int i = 3;

	while (i <= num / 2)
		if (num % i == 0)
			num = num / i;
		else
			i += 2;

	printf("%ld\n", num);

	return (0);
}
