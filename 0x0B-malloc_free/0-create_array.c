#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array of characters, and initializes it with 'H'
 * @size: no. of elements of the array
 * @c: character to fill array with its value
 *
 * Return: Pointer to the address of memory location
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *cPtr = (char *) malloc(size * sizeof(char));	
	if(size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		cPtr[i] = c;
	}
	return (cPtr);
}
