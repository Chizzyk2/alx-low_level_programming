#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: points to character
 * @src: points to character
 * @n: memory space
 * Return:Is *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
