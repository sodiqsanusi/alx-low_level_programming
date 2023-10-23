#include "lists.h"

/**
* get_nodeint_at_index - Return the nth node of a linked list (where possible)
* @head: A pointer to the head of the linked list
* @index: The index of the node to be returned
*
* Return: "listint_t *" A pointer to the node of the linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	nodePtr currentNode = head;
	unsigned int iterator = 0;

	while (currentNode)
	{
		if (iterator == index)
			return (currentNode);
		iterator++;
		currentNode = currentNode->next;
	}

	return (NULL);
}

