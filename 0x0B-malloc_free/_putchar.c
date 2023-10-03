#include <unistd.h>
#include "main.h"
/**
 * _putchar - It will write c to standard output
 * @c: character 
 * Return:Is 1.
 * -1 is returned if there is an error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
