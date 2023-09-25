#include <unistd.h>
#include "main.h"

/**
 * _putchar - It will write the character of c to stdout
 * @c: The character to print
 *
 * Return:Is 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
