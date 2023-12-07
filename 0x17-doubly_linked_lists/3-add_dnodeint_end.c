#include "lists.h"

/**
* add_dnodeint_end - Adds a new node to the end of the list
* @head: "dlistint_t **" A pointer to a pointer to the head of the list
* @n: "const int" The data to be stored in the new node
*
* Return: "dlistint_t *" A pointer to the head of the updated list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	nodePtr currentNode = *head;
	nodePtr newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (currentNode->next)
			currentNode = currentNode->next;
		newNode->prev = currentNode;
		currentNode->next = newNode;
	}
	return (*head);
}

