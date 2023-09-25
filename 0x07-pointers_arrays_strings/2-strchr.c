#include "main.h"

/**
 * _strchr - It will print c
 * @s: points to a char value
 * @c: char params will be found
 * Return: It will return an s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
