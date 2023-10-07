#include "main.h"

/**
 * array_range - array range of integers
 * @min: minimum array
 * @max: max array
 * Return: arr
 */
int *array_range(int min, int max)
{
	int *arr, r = 0, p = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (r <= max - min)
		arr[r++] = p++;
	return (arr);
}
