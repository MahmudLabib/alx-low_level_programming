#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: Pointer points to a pointer to list
 * @index: The node number to be returned
 * Return: address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	int counter = 0;
	listint_t *pn = head;

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
