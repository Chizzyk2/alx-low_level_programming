#include "main.h"

/**
 * _memset - block of memory
 * @s: it will point to a memory
 * @b: changes the data
 * @n: the number
 *
 * Return: It will return s
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
