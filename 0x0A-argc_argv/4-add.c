#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: No. of arguments
 * @argv: Array of strings
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i, j;

	for (i = argc - 1; i > 0; i--)
	{
		char *arg = argv[i];
		int valid = 1;

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit((unsigned char)arg[j]))
			{
				valid = 0;
				break;
			}
		}

		if (valid)
		{
			int n = atoi(arg);

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
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", result);
	return (0);
}
