#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: Pointer to the listint_t list
 *
 * Return: No. of nodes
*/
size_t print_listint(const listint_t *h)
{
	// i want to print every elements (value) of the listint_t
	listint_t *pn = NULL;
	pn = h;
	int counter = 0;

	while(pn)
	{
		_putchar(pn->n);
		counter++;
		pn = pn->next;
	}
	return (counter);
}
