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

	if (width <= 0 || height <= 0)
		return (NULL);
	if (pp2int == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		pp2int[i] = (int *)calloc(width, sizeof(int));
		if (pp2int[i] == NULL)
		{
			int j;
			for (j = 0; j < i; j++)
				free(pp2int[j]);
			free(pp2int);
			return (NULL);
		}

	}
	return (pp2int);
}
