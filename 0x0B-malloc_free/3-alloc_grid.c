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
	int i, j;
	int **pp2int = (int **)malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return (NULL);
	if (pp2int == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		pp2int[i] = (int *)malloc(sizeof(int) * width);
		if (pp2int[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(pp2int[j]);
			free(pp2int);
			return (NULL);
		}

	}
	for (i = 0; i < height; i++)
	{
		for(j = 0; j < width; j++)
			pp2int[i][j] = 0;
	return (pp2int);
}
