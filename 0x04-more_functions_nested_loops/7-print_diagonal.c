#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times '\' is printed
 *
 * Return: print the diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
