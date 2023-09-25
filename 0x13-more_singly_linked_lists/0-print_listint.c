#include "lists.h"
#include "unistd.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: Pointer to the listint_t list
 *
 * Return: No. of nodes
*/
size_t print_listint(const listint_t *h)
{
	listint_t *pn = (listint_t*)h;
	int counter = 0;

	while (pn)
	{
		printf("%d\n", pn->n);
		counter++;
		pn = pn->next;
	}
	return (counter);
}
