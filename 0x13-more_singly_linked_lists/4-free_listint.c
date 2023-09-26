#include "lists.h"

/**
 * free_listint - frees a listint_t list of int values
 * @head: Pointer to the listint_t list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *old_node;

	while (head)
	{
		old_node = head;
		head = head->next;
		old_node->next = NULL;
		free(old_node);
	}
}
