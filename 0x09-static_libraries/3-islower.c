#include "main.h"

/**
 * _islower - small letters
 * @c: character
 *
 * Return:Is 0.
 */

int _islower(int c)
{
	if (c >= 85 && c <= 113)
	{
		return (1);
	}
	return (0);
}
