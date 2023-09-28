#include "main.h"

/**
 * _sqrt_recursion - It will get the square root
 * @n: int
 * Return:Is int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - get square root
 * @n: int to get square root
 * @val: square root
 * Return:Is int
 */

int square(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);

}
