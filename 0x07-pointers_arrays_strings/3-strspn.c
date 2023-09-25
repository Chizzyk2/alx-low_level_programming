#include "main.h"

/**
* _strspn - It will Get the length of substring
* @s: substring is stored
* @accept: Substring chars is accepted
* Return: Is C
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
