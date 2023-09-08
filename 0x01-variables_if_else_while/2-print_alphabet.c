#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print Alphabet
 *
 * Return: Is 0 (Passed)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');

	return (0);
}
