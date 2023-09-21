#include "lists.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of list_t list
 * @h: Pointer to first struct list_t member
 *
 * Return: No. of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		node++;
	}
	return (node);
}
