#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: Pointer to first character in char array
 *
 * Return: Pointer to character
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || 
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (s[i] < 'm')
				s[i] += 13;
			else
				s[i] -= 13;
		}
		i++;
	}
	return (s);
}
