#include "main.h"

/**
 * print_last_digit - Printing the last digit of a number
 * @num: Number to get it's last digit
 *
 * Return: value of last digit
 */
int print_last_digit(int num)
{
	int absNum = (num < 0) ? -num : num;
	int last_digit = absNum % 10;
	char _d2char = last_digit + '0';

	_putchar(_d2char);
	return (last_digit);
}

