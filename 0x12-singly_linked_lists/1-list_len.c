#include "lists.h"

/**
 * list_len - Returns the number of elements in a list
 * @h: The singly-linked list
 *
 * Return: "size_t" The no. of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

