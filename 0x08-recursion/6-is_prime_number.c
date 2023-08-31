#include "main.h"
int is_div(int n, int div);

/**
 * is_prime_number - checks if a number is prime.
 * @n: input
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (is_div(n, div));
}

/**
 * is_div - check if num is divisible
 * @n: the number to be checked
 * @div: the result of division
 *
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int is_div(int n, int div)
{
	if (n % div == 0)
	{
		return (0);
	}
	if (div == n / 2)
	{
		return (1);
	}
	return (is_div(n, div + 1));
}
