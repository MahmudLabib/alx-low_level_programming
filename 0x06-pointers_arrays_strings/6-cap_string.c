#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @s: Pointer to string
 * 
 * Return: Pointer to char
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\0' || s[i] == '\n' || s[i] == '\t')
		{
			int j = i + 1;
			if (s[j] >= 'a' && s[j] <= 'z')
			{
				s[j] -= 32;
			}
		}
	}
	return (s);
}
