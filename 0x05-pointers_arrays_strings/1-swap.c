#include "main.h"

/**
 * swap_int - Swaps the values of two integer variables
 * @a: Pointer to first integer variable
 * @b: Pointer to second integer variable
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
