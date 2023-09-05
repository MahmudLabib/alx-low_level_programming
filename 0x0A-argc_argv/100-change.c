#include "main.h"
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: No. of arguments passed to main
 * @argv: Valus of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, n;
	int counter = 0;
	int _coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= _coin[i])
		{
			n -= _coin[i];
				counter++;
		}
	}
	printf("%d\n", counter);
	return (0);
}
