#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: Pointer to the listint_t list
 *
 * Return: No. of nodes
*/
size_t print_listint(const listint_t *h)
{
	listint_t *pn = NULL;
	int counter = 0;

	pn = h;
	while (pn)
	{
		_putchar(pn->n);
		counter++;
		pn = pn->next;
	}
	return (counter);
}
