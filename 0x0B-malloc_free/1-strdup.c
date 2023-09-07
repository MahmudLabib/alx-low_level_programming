#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_size - Get the size of the string literal
 * @p: Pointer to address momory location
 *
 * Return: size of string
 */
int string_size(char *p)
{
	int i, counter = 0;
	if (p == NULL)
		return ('\0');
	for (i = 0; p[i] != '\0'; i++)
		counter++;
	return (counter);
}
/**
 * _strdup - Duplicate the string to heap momory
 * @str: Pointer to address of the string be duplicated
 *
 * Return: pointer to momory address
 */
char *_strdup(char *str)
{
	int i;
	int size = string_size(str);
	char *sPtr = (char *) malloc(size * sizeof(char));

	if (sPtr == NULL || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		sPtr[i] = str[i];
	return (sPtr);
}
