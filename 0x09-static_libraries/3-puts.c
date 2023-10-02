#include "main.h"

/**
 * _puts - displays string
 * @str: string
 * Return:Is void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
