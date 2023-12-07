#include "lists.h"

/**
* dlistint_len - Return the number of elements in the list
* @h: "const dlistint_t *" Pointer to the head of the list
*
* Return: "size_t" The number of elements (nodes) in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	if (!h)
		return (num_of_nodes);
	while (h)
	{
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}

