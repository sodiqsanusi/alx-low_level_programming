#include "lists.h"

/**
* free_listint2 - Frees the memory allocated to a singly-linked list
* @head: A pointer to a pointer that points to the head of the list
*
* Return: "void" Nothing
*/
void free_listint2(listint_t **head)
{
	nodePtr temp = *head;

	if (head == NULL)
		return;
	while (temp)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}
}

