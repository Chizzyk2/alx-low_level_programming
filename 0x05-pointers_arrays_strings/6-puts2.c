#include "main.h"
/**
 * puts2 - It will print a string, followed by a new line,
 * @str: pointer to the string to print
 * Return:Is void
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
