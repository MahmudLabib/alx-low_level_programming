#include "main.h"
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: No. of arguments
 * @argv: Array of strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);

		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
