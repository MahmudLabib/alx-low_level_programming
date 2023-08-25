#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @a: Pointer to string
 * 
 * Return: Pointer to char
 */
 char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
		{
			a[i++] -= 32;
			continue;
		}
		if (a[i - 1] == ' ' || a[i - 1] == '\n' ||
            a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '.' ||
            a[i - 1] == '!' || a[i - 1] == '?' || a[i - 1] == '"' ||
            a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{' || a[i - 1] == '}')

		{
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] -= 32;
		}
		i++;
	}
	return (a);
}
