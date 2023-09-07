#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int i;

	int **pp2int = calloc(height, sizeof(int *) * height);
	if (pp2int == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		pp2int[i] = calloc(width, sizeof(int) * width);
	return (pp2int);
}
