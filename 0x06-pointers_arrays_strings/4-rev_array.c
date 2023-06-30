#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: pointer an the integer
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tab, lnbg, lnd;

	lnbg = 0;
	lnd = n - 1;
	while (lnbg < lnd)
	{
		tab = *(a + lnbg);
		*(a + lnbg) = *(a + lnd);
		*(a + end) = tab;
		lnd--;
		lnbg++;
	}
}
