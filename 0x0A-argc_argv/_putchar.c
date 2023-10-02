#include <unistd.h>

/**
 * _putchar - It writes the character c to stdout
 * @c: character
 * Return:Is 1.
 * -1 is returned if there is an error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
