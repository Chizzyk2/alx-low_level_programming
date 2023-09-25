#include "main.h"

/**
 * _memcpy - irontnoux2
 * @dest: It points to char params
 * @src: It points to char params
 * @n: size of byte
 * Return:returns *dest
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
