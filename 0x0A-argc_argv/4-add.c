#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: No. of arguments
 * @argv: Array of strings
 *
 * Return: Alway 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	for (i = argc - 1; i > 0; i--)
	{
		int n = atoi(argv[i]);

		if (n > 0)
		{
			result += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
	
