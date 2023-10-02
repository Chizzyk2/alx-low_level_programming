#include <stdio.h>

/**
 * main - prints arguments
 * @argc: arguments nos
 * @argv: arguments array
 * Return:Is 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
