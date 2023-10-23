#include "lists.h"

/**
 * print_listint - Transverses a linked list and prints its data
 * @h: The linked list to be transversed
 *
 * Return: "size_t" The number of nodes the linked list has
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}

