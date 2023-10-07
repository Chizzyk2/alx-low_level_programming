#include "main.h"

/**
 * malloc_checked - memory allocation
 * @b: byte
 * Return:A ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
