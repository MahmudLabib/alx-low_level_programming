#include "main.h"
#include <limits.h>

/**
 * print_last_digit - Printing the last digit of a number
 * @num: Number to get it's last digit
 *
 * Return: value of last digit
 */
int print_last_digit(int num)
{
	if (num == INT_MIN)
	{
		_putchar('8');
		return (8);
	}
	else
	{
	int absNum = (num < 0) ? -num : num;
	int last_digit = absNum % 10;

	_putchar('0' + last_digit);
	return (last_digit);
	}
}

