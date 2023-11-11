#include "lists.h"

/**
 * dlistint_len - prints no. of nodes in list
 * @h: Head of the list
 * Return: No. of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	
	if (!h)
		return (count);

	if (h->prev)
		h = h->prev;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
