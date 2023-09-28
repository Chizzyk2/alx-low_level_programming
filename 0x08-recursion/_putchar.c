#include <unistd.h>

/**
 * _putchar - It will write c to stdout
 * @c: The character to print
 *
 * Return:Is 1
 * On error, -1 will be returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
