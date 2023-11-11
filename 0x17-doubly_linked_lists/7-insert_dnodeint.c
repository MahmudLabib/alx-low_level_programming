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
	unsigned int index = 0;
	dlistint_t *newNode,*prev_node;
	unsigned int len = dlistint_len(*h);

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == len)
		return (add_dnodeint_end(h, n));

	prev_node = *h;

	while (prev_node && index < idx)
	{
		prev_node = prev_node->next;
		index++;
	}

	if (prev_node == NULL || index < idx - 1)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = prev_node;
	newNode->next = prev_node->next;

	if (prev_node->next)
	{
		prev_node->prev = newNode;
	}
	prev_node->next = newNode;

	return (newNode);
}
