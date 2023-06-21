#include "main.h"

/**
 * positive_or_negative - 
 * @i: variable for test
 *
 * Return: Always 0
 */

int positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative", i);
	} else if (i > 0)
	{
		printf("%d is positive", i);
	} else
		printf("%d is zero", i);
	return (0);
}
