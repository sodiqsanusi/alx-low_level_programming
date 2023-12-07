#include "lists.h"

/**
* print_dlistint - Prints all the elements in a doubly linked list
* @h: "dlistint_t *" A pointer to the head node of the list
*
* Return: "size_t" The number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	int num_of_nodes = 0;

	if (!h)
		return (num_of_nodes);
	while (h)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}

