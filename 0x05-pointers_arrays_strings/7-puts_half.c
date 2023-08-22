#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Pointer to the first character of the string
 * 
 * Return: void
*/
void puts_half(char *str)
{
	int i, n;

	n = _strlen(str);
	if (n % 2 == 0)
		n = n / 2;
	else
		n = (n - 1) / 2;
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
