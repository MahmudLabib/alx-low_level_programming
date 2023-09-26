#include "lists.h"

/**
 * free_listint - frees a listint_t list of int values
 * @head: Pointer to the listint_t list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *old_node = head;

	while (head)
	{
		old_node = old_node->next;
		head->next = NULL;
		head = old_node;
	}
	free(old_node);
	free(head);
}
