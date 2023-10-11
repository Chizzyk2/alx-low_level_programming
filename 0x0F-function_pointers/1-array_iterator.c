#include <stdio.h>

/**
 * array_iterator - function
 * @array: array values
 * @size: size
 * @action: points
 * Return: Nill
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
