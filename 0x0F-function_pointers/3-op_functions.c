#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition operation
 * @a: first
 * @b: second
 * Return:The result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 * @a: first
 * @b: second
 * Return: The result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 * @a: first
 * @b: second
 * Return: The result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: divisr
 * @b: dividndo
 * Return: reult
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulos operation
 * @a: first
 * @b: second
 * Return: The result
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
