#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - starting
 * @s: points to character
 * @accept: points to character
 * Return:Is 0
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
