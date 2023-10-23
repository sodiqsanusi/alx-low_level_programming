#include "lists.h"

/**
* free_listint - Frees the memory allocated to a singly-linked list
* @head: A pointer to the head of the linked list
*
* Return: "void" Nothing
*/
void free_listint(listint_t *head)
{
	nodePtr temp = head;

	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}

