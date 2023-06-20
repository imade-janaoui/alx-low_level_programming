#include "main.h"

/**
  * print_last_digit - Prints the last digit
  * @num: The number
  *
  * Return: The last digit
  */

int print_last_digit(int num)
{
	int vr;

	vr = num % 10;

	if (vr < 0)
	{
		vr *= -1;
	}
	_putchar(vr + '0');
	return (vr ;
}
