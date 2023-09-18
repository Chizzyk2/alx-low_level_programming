#include "main.h"

/**
 * _strlen - It will find the length of a string
 * @s: pointer to the string to check
 * Return:Is void
*/


int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
