#include "3-calc.h"

/**
 * op_add - adds two ints a and b.
 *
 * @a: the first integer.
 * @b: the second integer added to a.
 *
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers a and b.
 *
 * @a: the first integer.
 * @b: the second integer subtracted from a.
 *
 * Return: the difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of integers a and b.
 *
 * @a: the first integer.
 * @b: the second integer in the function.
 *
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of integers a and b.
 *
 * @a: the first integer.
 * @b: the second integer in the function.
 *
 * Return: result of  a divided by b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of a divided by b.
 *
 * @a: the first integer.
 * @b: the second integer in the function.
 *
 * Return: remainder when of a divided by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
