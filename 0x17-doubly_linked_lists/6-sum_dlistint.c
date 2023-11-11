// Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

// Prototype: int sum_dlistint(dlistint_t *head);
// if the list is empty, return 0
#include "lists.h"
/**
 * sum_dlistint - calc the sum of all data(n) of a dlistint_t list
 * @head: Head of the dlist
 * Return: sum of integers of the list nodes, [0] if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptrNode = head;
	
	if (!head)
		return (0);
	while (ptrNode)
	{
		sum += ptrNode->n;
		ptrNode = ptrNode->next;		
	}
	return (sum);
}
