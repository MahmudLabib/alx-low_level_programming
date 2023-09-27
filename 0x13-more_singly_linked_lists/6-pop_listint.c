#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t, pop the value of it
 * @head: Pointer points to pointer to listint_t list
 * Return: Head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *old_node;
	int val = 0;

	if (!head)
		return;
	if (*head)
	{
		old_node = *head;
		*head = (*head)->next;
		val = old_node->n;
		free(old_node);
	}
	return (val);
}
