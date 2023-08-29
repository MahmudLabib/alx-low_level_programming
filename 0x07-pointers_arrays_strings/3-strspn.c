#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: Pointer to the string to search in
 * @accept: Pointer to the string containing the accepted characters
 *
 * Return: unsigned int value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (counter);
			}
		}
	}
	return (counter);
}
