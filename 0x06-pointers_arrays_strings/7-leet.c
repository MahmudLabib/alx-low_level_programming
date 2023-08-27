#include "main.h"

/**
 * leet - Function that incodes a string into 1337
 * @s: Pointer to first array character
 *
 * Return: Pointer to character
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char ch[11] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l', '\0'},
	     str[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	while (s[i] != '\0')
	{
		for (j = 0; str[j] != '\0'; j++)
			if (s[i] == ch[j])
				s[i] = str[j];
		i++;
	}
	return (s);
}
