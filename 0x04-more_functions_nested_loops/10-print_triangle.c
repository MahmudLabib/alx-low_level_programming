#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: number of the triangle rows
 *
 * Return: print triangle
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= size-i-1; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i + 1; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
