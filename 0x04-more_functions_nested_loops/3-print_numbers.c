#include "main.h"

/**
 * print_numbers - It prints numbers
 * Return:Is 0
 */

void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;

	}
	_putchar('\n');

}
