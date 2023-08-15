#include "main.h"

/**
 * _abs - computes the absolute of an integer
 * @num: number to be checked
 *
 * Return: (+) if absolute, (-) if negative
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}
