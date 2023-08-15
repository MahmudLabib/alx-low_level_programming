#include <stdio.h>

/**
 * main - Prints putchar followed by a new line
 *
 * Return: 0 (Success)
 */
void _putchar(void);

int main(void)
{
	_putchar();
	return (0);
}
/**
 * _putchar - prints putchar char by char
 *
 * Return: void (success)
 */
void _putchar(void)
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
}
