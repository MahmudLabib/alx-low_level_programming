#include "main.h"

/**
 * _strchr - Locates a character in string
 * @s: Pointer to string memory location
 * @c: character to be searched for in string
 *
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s+i);
		else
			continue;
	}
	return (NULL);
}
