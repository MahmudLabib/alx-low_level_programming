#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: Pointer to character string location
 * @needle: Pointer to string to be searched
 *
 * Return: Returns a pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	while (*haystack)
	{
		while(*needle)
		{
			if (haystack[i] == needle[j])
			{
				if (needle[j+1] == '\0')
				{
					return (haystack + (i-j));
				}
				else if (needle[j + 1] != '\0')
				{
					j++;
					i++;
					break;
				}
			}
			else
			{
				j++;
			}
		}
	}
	return (0);
}
