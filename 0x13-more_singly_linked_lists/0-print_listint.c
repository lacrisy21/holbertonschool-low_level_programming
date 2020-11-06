#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: Pointer
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{

	size_t count = 1;

	if (h == NULL)
	{
		return (0);
	}
	printf("%d\n", h->n);
	count += print_listint(h->next);
	return (count);
}
