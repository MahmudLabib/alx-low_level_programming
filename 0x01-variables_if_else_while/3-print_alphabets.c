#include <stdio.h>

/**
 * main - Print the alphabet in two orders
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
