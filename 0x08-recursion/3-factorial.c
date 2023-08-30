#include "main.h"

/**
 * factorial - Gets the factorial of the given num
 * @n: Number to get it's factorial
 *
 * Return: Factorial if n more than 0, 1 if n equal 0, -1 if n less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
