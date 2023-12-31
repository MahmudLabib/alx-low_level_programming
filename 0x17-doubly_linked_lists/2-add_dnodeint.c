#include "lists.h"

/**
 * add_dnodeint - add a new node at beginning of a dlistint_t
 * @head: Head of the list
 * @n: int value
 * Return: [address] - On success, [NULL] - On fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;
	return (*head);
}
