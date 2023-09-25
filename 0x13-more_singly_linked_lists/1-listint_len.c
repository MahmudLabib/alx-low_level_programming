#include "lists.h"

/**
 * listint_len - count the no. of nodes in the listint_t list
 * @h: pointer the the first node in the list
 * Return: No. of nodes
*/
size_t listint_len(const listint_t *h)
{
	listint_t *pn = (listint_t *)h;
	int counter = 0;

	while (pn)
	{
		counter++;
		pn = pn->next;
	}
	return (counter);
}
