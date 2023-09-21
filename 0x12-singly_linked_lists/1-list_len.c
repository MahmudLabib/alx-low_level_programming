#include "lists.h"
#include <stdio.h>

/**
 * list_len - calc number of elements in a linked list_t list
 * @h: Pointer to the head node of the list_t
 *
 * Return: No. of elements in the list_t list
 */
size_t list_len(const list_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
