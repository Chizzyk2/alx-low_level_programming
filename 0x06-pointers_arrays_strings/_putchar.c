#include <unistd.h>

/**
 * _putchar - It write the character of c to standard output
 * @c: The character to print
 *
 * Return:Is 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
