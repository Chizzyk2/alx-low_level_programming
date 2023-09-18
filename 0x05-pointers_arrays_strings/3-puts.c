#include "main.h"
/**
 * _puts - It will print a string, followed by a new line
 * @str: pointer to the string to print
 * Return:Is void
*/


void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}