#include "main.h"

/**
 * clear_bit - set value of a  bit to 0
 *
 * @n: Pointer to num
 * @index: index of bit to clear
 * Return: (1) sucess, (-1) failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (*n & (1 << index))
		*n ^= (1 << index);
	return (1);
}
