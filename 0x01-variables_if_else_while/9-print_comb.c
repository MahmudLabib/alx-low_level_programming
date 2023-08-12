#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Descroption: false or true validation
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(32);
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
