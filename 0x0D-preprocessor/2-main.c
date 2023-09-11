#include "main.h"

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
