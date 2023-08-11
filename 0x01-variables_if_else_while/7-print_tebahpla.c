#include <stdio.h>

/**
 * main - Print alphabets in reversed order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
