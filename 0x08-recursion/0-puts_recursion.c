#include "main.h"

/**
 * _puts_recursion - It will print a string and a new line
 * @s: points to the string
 * Return:Is void
 */


void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
