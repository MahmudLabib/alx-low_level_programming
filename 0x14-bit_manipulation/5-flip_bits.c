#include "main.h"

/**
  * flip_bits - flib bits in a (n)
  * @n: n1
  * @m: n2
  * Return: the Number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_of_bits = 0;

	for (; n || m; n >>= 1, m >>= 1)
		num_of_bits += ((n & 1) != (m & 1));

	return (num_of_bits);
}
