#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Print numbers
 */
void more_numbers(void)
{
	int r, c, num;

	for (r = 0; r <= 10; r++)
	{
		for (c = 0; c <= 14; c++)
		{
			num = c;
			if (num > 9)
				_putchar('0' + num / 10);
			else
				_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
