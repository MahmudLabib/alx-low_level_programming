#include "main.h"

/**
 * print_to_98 - prints all natural number from 0 to 98
 * @n: print starting point
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
			printf("\n");
			n = n + 1;
		}
		else
		{
			printf("%d, ", n);
			n = n + 1;
		}
	}
}
