#include "main.h"
/**
 * print_rev - It will print a reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return:Is void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
