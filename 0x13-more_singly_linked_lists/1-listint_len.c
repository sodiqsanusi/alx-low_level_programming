#include "lists.h"

/**
 * listint_len - Calculates the number of nodes in a singly-linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: "size_t" Number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

