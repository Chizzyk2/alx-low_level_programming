#include "main.h"

/**
 * _memcpy - memory
 * @dest: It point to char 
 * @src: points to a char value
 * @n: the size of the data
 * Return: It will return dest value
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
