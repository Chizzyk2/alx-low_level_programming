#include "main.h"

/**
 * _realloc -  memory rellocation
 * @ptr: points to character
 * @old_size: the old size
 * @new_size: the new size
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int q;

	if (ptr != NULL)
	clone = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (q = 0; q < (old_size || q < new_size); q++)
	{
		*(relloc + q) = clone[q];
	}
	free(ptr);
return (relloc);
}
