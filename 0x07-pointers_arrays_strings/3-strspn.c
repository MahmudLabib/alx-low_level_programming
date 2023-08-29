#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: Pointer to the string to search in
 * @accept: Pointer to the string containing the accepted characters
 *
 * Return: unsigned int value
 */
unsigned int _strspn(char *s, char *accept)
{
    int i, j;
    int counter = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
                counter++;
        }
    }
    return (counter);
}
