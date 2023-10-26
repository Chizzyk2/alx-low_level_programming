#include "main.h"

/**
 * get_endianness - endianness
 * Return: 0 is returned for big otherwise 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

