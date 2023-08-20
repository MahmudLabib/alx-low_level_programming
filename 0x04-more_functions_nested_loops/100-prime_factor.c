#include <stdio.h>

/**
 * primeFactorization - Function to find and print the prime factore of number
 * @n: The number to get its factores
 *
 * Return: print factores of the number.
 */

void primeFactorization(long int n)
{

	long int divisor;

	divisor = 2;
	while (n > 1)
	{
		if (n % divisor == 0)
		{
			n /= divisor;
		}
		else
		{
		    divisor++;
		    continue;
		}
	}
	printf("%ld\n", divisor);
}
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	primeFactorization(612852475143);
	return (0);
}
