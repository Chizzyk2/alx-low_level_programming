#include "main.h"

/**
* _strspn - starting
* @s: Print string
* @accept: take input
* Return:Is 0
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				p++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (p);
}
