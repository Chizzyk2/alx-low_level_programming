#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - arguments
 * @argc: argument nos
 * @argv: argument array
 * Return:Sum
 */
int main(int argc, char *argv[])
{
	unsigned int q, sum, num;

	sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (q = 0; argv[argc][q] != '\0'; q++)
		{
			if (!(isdigit(argv[argc][q])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (sum);
}
