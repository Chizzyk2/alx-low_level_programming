#include <stdio.h>

/**
 * main - starting
 * @argc: arguments arr no
 * @argv: arguments arr
 * Return:Is 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
