#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Pointer to first arr element
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char temp;

	while (*s != '\0')
	{
		s++;
		len--;
	}
	s--;
	while (start < s)
	{
		temp = *start;
		*start = *s;
		*s = temp;
		start++;
		s--;
	}
	_putchar('\n');
}
