#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of list
 * @head: Head of the list
 * @n: int value
 * Return: [address] if success, [NUll] on fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head != NULL)
	{
		dlistint_t *ptrNode;

		ptrNode = *head;
		while (ptrNode->next != NULL)
		{
			ptrNode = ptrNode->next;
		}
		newNode->prev = ptrNode;
		ptrNode->next = newNode;
	}
	else
	{
		*head = newNode;
		newNode->prev = NULL;
	}

	return (*head);
}
