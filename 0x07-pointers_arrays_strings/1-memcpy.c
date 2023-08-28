#include "main.h"

/**
 * _memcpy -  copies memory area
 * @dest: Pointer to the object to copy to
 * @src: Pointer to the object to copy from
 * @n: Number of bytes to copy
 *
 * Description: Copies count characters from the object
 * pointed to by src to the object pointed to by dest
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
