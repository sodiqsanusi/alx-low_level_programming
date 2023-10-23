#include "lists.h"

/**
* add_nodeint_end - Adds a new node to the end of a singly-linked list
* @head: A pointer to a pointer that points to the head of the list
* @n: The data to be put into the new node
*
* Return: Pointer to the address of the head of the new pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	nodePtr currentNode = *head;
	nodePtr newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (currentNode->next)
			currentNode = currentNode->next;
		currentNode->next = newNode;
	}

	return (*head);
}

