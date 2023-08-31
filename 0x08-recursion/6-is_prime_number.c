#include "main.h"

/**
 * _prime - check the given number is prime or not
 * @n: Number to be checked
 * @decr: the decrement number of n
 *
 * Return: 1 if n equle 2, 0 otherwise
 */
int _prime(int n, int decr)
{
	if ( decr == 2)
		return (1);
	if(n % decr == 0)
		return (0);
	else
		return (_prime(n, decr - 1));
}

/**
 * is_prime_number - Check is it prime
 * @n: number to check is it prime
 *
 * Return: 1 if it prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if ( n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
