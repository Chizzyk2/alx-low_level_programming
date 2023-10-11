#include "function_pointers.h"

/**
 * int_index - index integar
 * @array: array values
 * @size: the size
 * @cmp: values comparism
 * Return:Is 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
