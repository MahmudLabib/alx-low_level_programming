#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: number to be checked
 *
 * Return: 1 (If n greater than zero).
 *	  -1 (If n less than zero).
 *	   0 (If n is zero).
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
