#include "lists.h"

/**
* get_dnodeint_at_index - Get the node at a particular index of the list
* @head: "dlistint_t *" A pointer to the head of the list
* @index: "unsigned int" The index to which the node should be returned
*
* Return: "dlistint_t *" A pointer to the node of the index, "NULL" otherwise
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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

