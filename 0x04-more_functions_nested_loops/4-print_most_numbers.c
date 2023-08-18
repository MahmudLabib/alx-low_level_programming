#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9 don't (2, 4)
 *
 * Return: print numbers
 */
void print_most_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			continue;
		else
			_putchar('0' + c);
	}
	_putchar('\n');
}
