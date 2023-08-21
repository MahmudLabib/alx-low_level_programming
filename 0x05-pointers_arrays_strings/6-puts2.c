#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to first character of string literal
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
