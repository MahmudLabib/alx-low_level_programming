#include "lists.h"
/**
 * free_dlistint - free doubly linked list
 * @head: Head of the dlist
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptrNode;
	while(head)
	{
		ptrNode = head;
		head = head->next;
		free(ptrNode);
	}
}