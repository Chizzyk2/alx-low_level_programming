#include "main.h"

/**
 * _memset - set memory
 * @s: points to the address of memory
 * @b: data specified
 * @n: bytes
 * Return:Is *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
