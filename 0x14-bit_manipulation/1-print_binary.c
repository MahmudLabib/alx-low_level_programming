#include "main.h"

/**
 * print_binary - prints the binary representaion of a number
 * @n: number to show its bits (binary)
 * Return: binary representaion of (n)
 */
void print_binary(unsigned long int n)
{
	unsigned int bol = 0, mNum = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mNum)
	{
		if (bol == 1 && (n & mNum) == 0)
			_putchar('0');
		else if ((n & mNum) != 0)
		{
			_putchar('1');
			bol = 1;
		}
		mNum >>= 1;
	}
}
