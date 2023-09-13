#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Pointer to string
 * @f: Pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
        (*f)(name);
}
