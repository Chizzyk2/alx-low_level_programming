#include "main.h"

/**
 * print_line - It will check for a digit
 * @n : number of _ to be printed
 * Return:Is void
 */

void print_line(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}
