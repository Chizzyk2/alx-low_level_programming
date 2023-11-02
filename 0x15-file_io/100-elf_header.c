#include <stdio.h>

/**
 * main - The ELF file
 * @argc: The arguments
 * @argv: The array of arguments
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
