#include "main.h"

int _abs(int num);
/**
 * print_last_digit - Printing the last digit of a number
 * @num: Number to get it's last digit
 *
 * Return: value of last digit
 */
int print_last_digit(int num)
{
	int last_digit = _abs(num) % 10;
	char _d2char = last_digit + '0';

	_putchar(_d2char);
	return (last_digit);
}

int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}
