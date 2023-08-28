#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: Pointer to first string memory location
 * @s: Pointer to second string memory location
 *
 * Return: int value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int counter = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
				counter++;
		}
	}
	return (counter);
}
