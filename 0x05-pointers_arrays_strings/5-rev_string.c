#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Pointer to first arr element
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len;

	while (*s != '\n')
	{
		s++;
		len--;
	}
	s--;
	while (len > 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}

