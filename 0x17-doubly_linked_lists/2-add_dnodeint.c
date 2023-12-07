#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of the list
* @head: "dlistint_t **" A pointer to a pointer to the head of the list
* @n: "const int" The data to be put in the new node
*
* Return: "dlistint_t *" Pointer to the new head of the list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
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
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}
	return (*head);
}

