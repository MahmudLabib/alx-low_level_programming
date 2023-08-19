#include "main.h"
#include <stdio.h>

/**
 * main - prints the nums 1 ~ 100
 * For multiples of three print Fizz instead of the number
 * For the multiples of five print Buzz instead of the number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
