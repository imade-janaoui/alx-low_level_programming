#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @num: variable for test
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int num)
{
	int vr;
	if (num < 0)
		num = num * -1;
	vr = num % 10;
	_putchar(vr + '0');
	return (vr);
}
