#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times '_' should be printed
 *
 * Return: print line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
