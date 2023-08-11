#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Last digit value
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, remin;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	remin = n % 10;
	/* your code goes there */
	if (remin > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, remin);
	else if (remin == 0)
		printf("Last digit of %d is %d and is 0\n", n, remin);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, remin);
	return (0);
}
