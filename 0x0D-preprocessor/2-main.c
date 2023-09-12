#include "main.h"

/**
 * main - prints the name of the file it was compiled from
 * 
 * Return: Always 0 (Sucess)
 */
int main()
{
	char *s = __FILE__;
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	putchar('\n');
	return (0);
}
