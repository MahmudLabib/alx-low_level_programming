#include "main.h"

/**
 * print_array - Prints n elements of an array
 * @a: Pointer to first element of array
 * @n: Number of elements of array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	int *ptr_arr;

	ptr_arr = a;
	for (i = 0; ptr_arr[i] < n; i++)
	{
		printf("%d ,", ptr_arr[i]);
	}
}
