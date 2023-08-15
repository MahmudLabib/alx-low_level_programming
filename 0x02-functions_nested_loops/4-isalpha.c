#include "main.h"

/**
 * _isalpha - Checks the alphabetic character
 * @c: Character to be checked
 *
 * Return: 1 if its letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c >= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
