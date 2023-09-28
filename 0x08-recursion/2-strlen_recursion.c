#include "main.h"

/**
 * _strlen_recursion - It will return the string length
 * @s: points to the string
 * Return:Is int
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}

	return (n);
}
