#include "lists.h"
/**
 * get_dnodeint_at_index - Get the nth node of doubly linkdedlist
 * @head: Head of the list
 * @index: nth node
 * Return: [nth node] if success, [NULL] on fail
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *ptrNode = head;

	while (ptrNode)
	{
		if (counter == index)
			return (ptrNode);
		ptrNode = ptrNode->next;
		counter++;
	}
	return (ptrNode);

}
