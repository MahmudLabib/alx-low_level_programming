#include "main.h"

/**
 * _strlen - Get the length of the string
 * @s: Pointer to fist character
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
        int counter = 0;

        while (*s != '\0')
        {
                counter++;
                s++;
        }
        return (counter);
}

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
		n = (n / 2) + 1;
	else
		n = (n - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
