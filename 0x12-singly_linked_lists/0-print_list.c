#include "lists.h"

/**
 * print_list - prints all the elements of list_t list
 * @h: Pointer to first struct list_t member
 * 
 * Return: No. of nodes
*/
size_t print_list(const list_t *h)
{
	/*
	int len1 = strlen(h->str);
	int len2 = strlen(h->next->str); */
	int i = 0;
	char *nl = "[0] (nil)";
	if (h->str == NULL)
	{
		for (; *nl; i++)
		{
			_putchar(nl[i]);
		}
	}
	_putchar('[');
	_putchar(']');
	_putchar(' ');
	for (; h->str[i] != '\0'; i++)
	{

		
	}
	_putchar('\n');
	_putchar('[');
	_putchar(']');
	_putchar(' ');
	for (; h->next->str[i] != '\0'; i++)
	{
		_putchar(h->next->str[i]);
	}
	return (2);
}