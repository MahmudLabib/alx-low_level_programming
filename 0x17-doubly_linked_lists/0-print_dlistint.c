#include "lists.h"

/**
 * print_dlistint - Prints the doubly linkedlist elements
 * @h: Head of the list
 * Return: no. of nodes list contain
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
