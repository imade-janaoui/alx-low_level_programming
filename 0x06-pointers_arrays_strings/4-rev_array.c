#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: pointer an the integer
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tab, i;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		tab = a[i];
		a[i++] = a[n];
		a[n--] = tab;
	}
}
