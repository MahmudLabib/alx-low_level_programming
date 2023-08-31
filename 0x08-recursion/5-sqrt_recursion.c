#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - It returns the value of square rof n.
 * @n: an input
 *
 * Return: The square r
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find squr root
 * @prev: previous value
 * @root: square root value
 *
 * Return: the square root
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}