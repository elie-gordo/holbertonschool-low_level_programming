#include "main.h"

/**
 * sqrt_helper - finds natural square root candidate recursively
 * @n: number to evaluate
 * @i: current candidate
 *
 * Return: natural square root, or -1 if none exists
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to evaluate
 *
 * Return: natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}
