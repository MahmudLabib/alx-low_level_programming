#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to string memory location
 * @b: The value to be set
 * @n: Number of bytes to be set
 *
 * Return: Pointer to stirng memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
