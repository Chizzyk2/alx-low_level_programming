#include "main.h"
/**
 * reverse_array - It will reverse an int array
 * @a: pointer
 * @n: array length
 * Return:Is void
*/

void reverse_array(int *a, int n)
{
	int i = 0, half;

	for (half = n / 2; half > 0; half--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
