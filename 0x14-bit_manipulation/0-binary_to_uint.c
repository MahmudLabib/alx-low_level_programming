#include "main.h"
#include <math.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: Pointer to the binary number to be converted
 * Return: converted number, or ( 0 ) -> if b have
 * any value ather than (0, 1) or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, intval = 1, result = 0;

	if (!b)
		return (0);
	while (b[i])
		i++;
	while (i)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
			return (0);
		if (b[i - 1] == '1')
			result += intval;
		intval *= 2;
		i--;
	}
	return (result);
}
