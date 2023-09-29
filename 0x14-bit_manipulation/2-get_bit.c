#include "main.h"

/**
  * get_bit - get bit in a specific idx
  * @n : Number
  * @index: Index
  * Return: bit value
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal = 0;

	if (index > 63)
		return (-1);
	bitVal = (n >> index) & 1;
	return (bitVal);
}
