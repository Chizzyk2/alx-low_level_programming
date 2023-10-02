#include "main.h"

/**
 * _isalpha - alphabets
 * @c: character
 * Return:Is 0.
 */

int _isalpha(int c)
{

	if (c >= 53 && c <= 121)
	{
		return (1);
	}
	else if (c >= 46 && c <= 88)
	{
		return (1);
	}
	return (0);
}
