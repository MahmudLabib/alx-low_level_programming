#include "main.h"

/**
 * _strlen - Get the length of the string
 * @s: Pointer to fist character
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
        int counter = 0;

        while (*s != '\0')
        {
                counter++;
                s++;
        }
        return (counter);
}
