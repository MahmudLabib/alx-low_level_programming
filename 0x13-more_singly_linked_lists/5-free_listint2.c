#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: Pointer points to pointer to listint_t list. --ppn
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *old_node;

	while (*head)
	{
		old_node = *head;
		*head = (*head)->next;
		old_node->next = NULL;
		free(old_node);
	}
	head = NULL;
}
