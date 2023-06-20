#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @num: variable for test
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int num)
{
	if (num < 0)
		num = num * -1;
	num = num % 10;
	_putchar(num + '0');
	return (num);
}
