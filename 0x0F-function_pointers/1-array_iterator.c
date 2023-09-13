#include "function_pointers.h"

/**
 * array_iterator - iterate throw the array elements
 * @array: Pointer to array
 * @size: size of the array
 * @action: Pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
