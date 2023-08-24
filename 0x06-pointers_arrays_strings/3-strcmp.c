#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer to first array of characters
 * @s2: Pointer to second array of characters
 *
 * Return:	0 (For identical)
 *		> 0 (For s1[i] > s2[i])
 *		< 0 (For sr[i] < s2[i])
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
