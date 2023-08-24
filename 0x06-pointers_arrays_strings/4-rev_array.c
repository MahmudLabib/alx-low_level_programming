#include "main.h"

/**
 * reverse_array - Reverse the content of array of integers
 * @a: Pointer to first array element
 * @n: Number of the array elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp = 0;
	int *b = a;

	while (i < n)
	{
		temp = a[i];
		a[i] = b[n - 1];
		b[n - 1] = temp;
		
		i++;
		n--;
	}
}
