#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at any index of the dlist
 * @h: Head of the list
 * @idx: index to insert the node in
 * @n: int value
 * Return: address of the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *nxt_idx_node;
	dlistint_t *prev_idx_node = *h;

	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;

	while (index < idx - 1)
	{
		prev_idx_node = prev_idx_node->next;
		index++;
	}
	nxt_idx_node = prev_idx_node->next;
	nxt_idx_node->prev = newNode;
	newNode->next = nxt_idx_node;
	prev_idx_node->next = newNode;
	newNode->prev = prev_idx_node;
	return (newNode);
}
