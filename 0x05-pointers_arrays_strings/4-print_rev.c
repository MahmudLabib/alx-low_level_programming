#include "main.h"

/**
 * print_rev - Prints the string literal in reverse
 * @s: Pointer to first character of the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
