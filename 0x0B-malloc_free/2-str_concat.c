#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _sizeof - gets the size of string
 * @p: Pointer to string (address memory locatoin)
 *
 * Return: No. of string elements
 */
int _sizeof(char *p)
{
	int i, counter = 0;

	if (p == NULL)
		return (0);
	for (i = 0; p[i] != '\0'; i++)
		counter++;
	return (counter);
}
/**
 * str_concat - Concatenates two strings
 * @s1: Pointer to first string
 * @s2: Pointer to 2nd string
 *
 * Return: Pointer to newly allocated space,
 * if NULL is passed, trate it as "", return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size = _sizeof(s1);
	int s2_size = _sizeof(s2);
	int s_total_size = s1_size + s2_size + 1;
	int i, j = 0;
	char *s = (char *) malloc(s_total_size * sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s == NULL)
		return (NULL);
	for (i = 0; s[i] < s_total_size; i++)
	{
		if (i < s1_size)
		{
			s[i] = s1[i];
			continue;
		}
		s[i] = s2[j];
		j++;
	}
	s[i] = '\0';
	return (s);
}
