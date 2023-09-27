#include "lists.h"

/**
 * sum_listint -  Get sum of all the data (n) of a listint_t linked list
 * @head: Pointer to listint_t structure list
 * Return: The sum of all the data n in list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *pn = head;

	if (head == NULL)
		return (0);
	while (pn)
	{
		sum += pn->n;
		pn = pn->next;
	}
	return (sum);
}
