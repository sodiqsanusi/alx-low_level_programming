#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a specified index of the list
* @head: "dlistint_t **" A pointer to a pointer to the head of the list
* @index: "unsigned int" The index/position of the node to be deleted
*
* Return: "int" 1 if successful, -1 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	nodePtr currentNode = *head;
	unsigned int iterator = 0;

	if (!head || currentNode == NULL)
		return (-1);
	while (currentNode)
	{
		if (iterator == index)
		{
			if (currentNode->prev)
				currentNode->prev->next = currentNode->next;
			else
			{
				if (currentNode->next)
					currentNode->next->prev = NULL;
				*head = currentNode->next;
				free(currentNode);
				return (1);
			}
			if (currentNode->next)
				currentNode->next->prev = currentNode->prev;
			free(currentNode);
			return (1);
		}
		iterator++;
		currentNode = currentNode->next;
	}
	return (-1);
}

