#include <unistd.h>

/**
 * _putchar - It will write the c to stdout
 * @c: print
 *
 * Return:Is 1.
 * -1 is returned if there is an error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
