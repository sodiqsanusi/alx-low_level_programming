#include "lists.h"

/**
* add_nodeint - Adds a new node to the beginning of the linked list
* @head: A pointer to a pointer that points to the head of the linked list
* @n: The data to be put into the new node
*
* Return: "listint_t" The address of the head of the new linked list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	nodePtr currentNode = *head;
	nodePtr newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		return (newNode);
	newNode->next = currentNode;
	*head = newNode;

	return (*head);
}

