#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - value of byte
 * @s: It will point to a char
 * @accept: It points to a char
 * Return: void
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
