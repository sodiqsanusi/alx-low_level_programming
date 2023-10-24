#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a specified index
* @head: A pointer to a pointer to the head of the node
* @idx: The index of the list to be inserted
* @n: The new data that should be in the new node
*
* Return: "listint_t *" Address of the head of the newly created node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	nodePtr currentNode = *head;
	nodePtr newNode = malloc(sizeof(listint_t));
	unsigned int iterator = idx;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}
	if (*head == NULL)
		return (NULL);
	while (iterator != 1 && currentNode)
	{
		iterator--;
		currentNode = currentNode->next;
	}
	if (currentNode)
	{
		newNode->next = currentNode->next;
		currentNode->next = newNode;
		return (*head);
	}

	return (NULL);
}

