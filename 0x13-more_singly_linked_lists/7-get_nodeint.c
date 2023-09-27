/*
Write a function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL
*/
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of list
 * @head: Pointer points to a pointer to listint_t list
 * @index: The node number to be returned
 * Return: address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int counter = 0;
	listint_t *pn = *head;

	while (counter != index)
	{
		if (pn == NULL)
		{
			return (NULL);
		}
		else
		{
			pn = pn->next;
			counter++;
		}
	}
	return (pn);
}
