#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node of a list at a specified index
* @head: A pointer to a pointer that points to the head of the list
* @index: The index of the node to be deleted
*
* Return: "int" 1 if successful, -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	nodePtr currentNode = *head, temp;
	unsigned int iterator = index;

	if (!head || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = currentNode->next;
		free(currentNode);
		return (1);
	}
	while (iterator > 1)
	{
		iterator--;
		currentNode = currentNode->next;
		if (!currentNode)
			return (-1);
	}

	temp = currentNode->next;
	currentNode->next = temp->next;
	free(temp);
	return (1);
}

