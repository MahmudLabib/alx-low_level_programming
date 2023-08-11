#include <stdio.h>

/**
 * main - print alphabets without specifice chars
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'q' || l == 'e')
			continue;
		else
			putchar(l);
	}
	putchar('\n');
	return (0);
}
