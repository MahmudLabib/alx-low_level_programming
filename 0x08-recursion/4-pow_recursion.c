#include "main.h"

/**
 * _pow_recursion - Calulates the value of x raised to power of y
 * @x: Number to get its power value
 * @y: Number to raise it to x
 *
 * Return: value of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
