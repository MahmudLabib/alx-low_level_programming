#include "main.h"

/**
 * _strcat - Appends the 'src' string to the 'dest' string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
