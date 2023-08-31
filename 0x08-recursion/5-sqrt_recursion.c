#include "main.h"

int perfect_sqrt(int i, int n);

/**
 * _sqrt_recursion - It returns the natural square root of number
 * @n: number to get it's square root
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (perfect_sqrt(1, n));
}

/**
 * perfect_sqrt - gets the square root of n
 * @n: number to get its sqrt
 * @i: is it root
 * Return: -1 if i greater than n, i if it's the sqrt of n
 */
int perfect_sqrt(int i, int n)
{
	if (i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (perfect_sqrt(i + 1, n));
}
