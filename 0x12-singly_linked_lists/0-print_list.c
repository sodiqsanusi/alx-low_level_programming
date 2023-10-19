#include "lists.h"

/**
 * print_list - Print the elements of a singly-linked list
 * @h: The singly-linked list
 *
 * Return: "size_t" The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		if (h->str == NULL)
			printf("[0] (nill)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}

