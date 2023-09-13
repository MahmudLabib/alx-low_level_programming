#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function that free a structure
 * d: Pointer to structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
		d = NULL;
	}
}
