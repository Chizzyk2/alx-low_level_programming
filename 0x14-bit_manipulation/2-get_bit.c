#include "main.h"

/**
 * get_bit - bit digits
 * @n: num
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

