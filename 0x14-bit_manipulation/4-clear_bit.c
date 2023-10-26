#include "main.h"

/**
 * clear_bit - set bit value
 * @n: num
 * @index: index
 * Return: 1 is returned if succeded otherwise 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

