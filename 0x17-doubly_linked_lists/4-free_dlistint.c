#include "lists.h"

/**
* free_dlistint - Frees the allocated memory for a doubly-linked list
* @head: "dlistint_t *" A pointer to the head of the list
*
* Return: "void" Nothing
*/
void free_dlistint(dlistint_t *head)
{
	nodePtr temp = head;

	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}

