#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: Pointer to the string to search in
 * @accept: Pointer to the string containing the accepted characters
 *
 * Return: pointer to that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}

