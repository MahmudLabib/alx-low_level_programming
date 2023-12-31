#include "lists.h"
#define h head

/**
 * add_nodeint - adds a new node at the beggining of a listin_t list
 * @head: Pointer points to a pointer to listint_t list (node), --ppn
 * @n: int value stored in node
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pn = malloc(sizeof(listint_t));

	if (pn == NULL)
		return (NULL);
	if (!(*h))
	{
		pn->n = n;
		pn->next = NULL;
		*h = pn;
	}
	else
	{
		pn->n = n;
		pn->next = *h;
		*h = pn;
	}
	return (pn);
}
