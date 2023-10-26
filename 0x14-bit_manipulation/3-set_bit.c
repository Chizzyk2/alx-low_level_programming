#include "main.h"

/**
 * set_bit - set the bit index
 * @n: num
 * @index: index
 * Return: 1 is returned id succeded otherwise 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

