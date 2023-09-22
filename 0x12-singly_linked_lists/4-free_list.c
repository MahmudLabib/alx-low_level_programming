#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees list_t list
 * @head: Pointer to the list_t list
 *
 * Return : void
 */
void free_list(list_t *head)
{
	list_t *old_node;

	old_node = head;
	while (head)
	{
		old_node = head;
		head = head->next;
		free(old_node->str);
		free(old_node);
	}
	free(head);
}
