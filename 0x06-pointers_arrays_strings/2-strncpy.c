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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}