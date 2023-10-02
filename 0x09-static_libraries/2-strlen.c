#include "main.h"

/**
 * _strlen - string length
 * @s: string input
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
