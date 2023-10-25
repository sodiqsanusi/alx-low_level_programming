#include "lists.h"

/**
* reverse_listint - Reverses a songly-linked list
* @head: A pointer to a pointer that points to the head of the list
*
* Return: "listint_t *" A pointer to the head of the new reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	nodePtr prevNode = NULL;
	nodePtr nextNode = NULL;

	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}

	*head = prevNode;
	return (*head);
}

