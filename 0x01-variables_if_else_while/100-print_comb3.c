#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1 + i; j < 10; j++)
		{
			if (j != i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8)
				{
					putchar(',');
					putchar(32);
				}
				else
				{
					break;
				}
			}
			else
			{
				continue;
			}
		}
	}
	putchar('\n');
	return (0);
}
