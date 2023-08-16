#include "main.h"

/**
 * print_times_table - print the n time table
 * @n: number of tabel to be printed
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;
	int result = 0;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				result = i * j;

				if (result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (result <= 99)
				{
					_putchar(' ');
					_putchar('0' + result / 10);
				}
				else
				{
					_putchar('0' + result / 100);
					_putchar('0' + (result / 10) % 10);
				}
				_putchar('0' + result % 10);
			}
			_putchar('\n');
		}
	}
}
