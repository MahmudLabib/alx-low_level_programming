#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: Pointer points to a pointer to listint_t list (node). --ppn
 * @n: int value
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pn = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (!pn)
		return (NULL);
	pn->n = n;
	pn->next = NULL;
	if (!(*head))
	{
		*head = pn;
		return (pn);
	}
	while (!current)
	{
		current = current->next;
	}
	current->next = pn;
	return (pn);
}
