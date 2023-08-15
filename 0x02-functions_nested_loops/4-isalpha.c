#include "main.h"

/**
 * _isalpha - Checks the alphabetic character
 * @c: Character to be checked
 *
 * Return: 1 if its letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
