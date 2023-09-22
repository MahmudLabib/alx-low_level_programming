#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - Add new node at the beginning of a list_t list
 * @head: Pointer to a pointer that points to a node
 * @str: Pointer to string literal
 * Return: Address of the pointer to the new node, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int lens = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	while (str[lens])
		lens++;
	new->str = strdup(str);
	new->len = lens;
	new->next = *head;
	*head = new;
	return (new);
}
