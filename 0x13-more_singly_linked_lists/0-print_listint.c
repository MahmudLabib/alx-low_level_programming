#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: Pointer to the listint_t list
 *
 * Return: No. of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *pn = (listint_t *)h;
	int counter = 0;

	while (pn)
	{
		printf("%d\n", pn->n);
		counter++;
		pn = pn->next;
	}
	return (counter);
}
