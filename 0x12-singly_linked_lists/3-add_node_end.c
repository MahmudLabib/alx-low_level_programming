#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds new node at the end of a list_t list
 * @head: Pointer to a pointer that points to node of a list
 * @str: Pointer to string literal
 * Return: address of the pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int lens = 0;
	list_t *p2l;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	while (str[lens])
		lens++;
	new->len = lens;
	new->str = strdup(str);
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = NULL;
		p2l = *head;
		while (p2l->next)
			p2l = p2l->next;
		p2l->next = new;
	}
	return (new);
}
