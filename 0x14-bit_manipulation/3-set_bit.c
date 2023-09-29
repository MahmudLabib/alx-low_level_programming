#include "main.h"

/**
  * set_bit - set value a bit to 1 at an index
  *
  * @n: Pointer to number
  * @index: Index
  * Return: (1) sucess, (-1) failed
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
