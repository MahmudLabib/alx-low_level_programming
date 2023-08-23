#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 * to buffer pointed to by dest
 * @dest: Pointer to char array
 * @src: Pointer to string literal
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		else if (*(src + i)  == '\0')
		{
			dest[i] = src[i];
			break;
		}
	}
	return (dest);
}
