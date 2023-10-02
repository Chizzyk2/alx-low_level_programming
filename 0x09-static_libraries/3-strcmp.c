#include "main.h"

/**
 * _strcmp - strings comparation
 * @s1 : points to character
 * @s2 : points to character
 * Return:Is dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int R;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
}
