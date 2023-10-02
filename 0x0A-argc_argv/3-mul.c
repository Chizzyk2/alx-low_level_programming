#include <stdio.h>
#include <stdlib.h>

/**
 * main - arguments
 * @argc: arguments no
 * @argv: argument arrays
 * Return:Is 0
 */
int main(int argc, char *argv[])
{
	int m, val = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (m = 1; m < argc; m++)
	{
		val *= atoi(argv[m]);
	}
	printf("%d\n", val);
	return (0);
}
