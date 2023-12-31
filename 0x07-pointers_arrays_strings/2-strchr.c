#include "main.h"

/**
 * _strchr - Locates a character in string
 * @s: Pointer to string memory location
 * @c: character to be searched for in string
 *
 * Return: Pointer to the first occurrence of ch, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (c == s[i])
		return (s + i);
	return (NULL);
}
