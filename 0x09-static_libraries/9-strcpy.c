#include "main.h"

/**
 * *_strcpy - string copying
 * @dest: points to
 * @src: points from
 * Return:Is dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
