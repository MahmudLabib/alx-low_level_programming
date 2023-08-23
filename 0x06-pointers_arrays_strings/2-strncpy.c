#include "main.h"

/**
 * _strncpy - Concatenates two strings
 * @dest: Pointer to dest string
 * @src: Pointer to src string
 * @n: size of src string
 *
 * Return: Pointer to char 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
		dest[i++] = src[j++];
	return (dest);
}
