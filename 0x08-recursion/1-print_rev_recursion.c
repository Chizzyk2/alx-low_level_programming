#include "main.h"

/**
 * _print_rev_recursion - It will print string in a reverse format
 * @s: It will point to the string
 * Return:Is void
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
