#include "lists.h"

/**
 * dlistint_len - prints no. of nodes in list
 * @h: Head of the list
 * Return: No. of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return (count);

	if (h->prev)
		h = h->prev;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
/**
 * insert_dnodeint_at_index - insert node at any index of the dlist
 * @h: Head of the list
 * @idx: index to insert the node in
 * @n: int value
 * Return: address of the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 1;
	dlistint_t *nxt_idx_node;
	dlistint_t *prev_idx_node = *h;
	unsigned int len = dlistint_len(*h);

	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	else if (idx == len)
		return (add_dnodeint_end(h, n));

	while (index < idx)
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
