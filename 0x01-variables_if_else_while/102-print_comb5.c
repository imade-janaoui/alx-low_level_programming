#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations
 *
 * Return: Always 0
 */

int main(void)
{
	int _ivar, _jvar;
	int i, j;
	
	for (_ivar = 48; _ivar < 58; _ivar++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			_jvar = _ivar;
			for (; _jvar < 58; _jvar++)
			{
				for (; j < 58; j++)
				{
					putchar(_ivar);
					putchar(i);
					putchar(' ');
					putchar(_jvar);
					putchar(j);
					if (_ivar != 57 || _jvar != 57 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
