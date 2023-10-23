#include "lists.h"

/**
* pop_listint - Delete the head node of a linked list
* @head: Pointer to a pointer that points to a linked list
*
* Return: "int" Data from the head of the linked list
*/
int pop_listint(listint_t **head)
{
	nodePtr temp = *head;
	int nodeData;

	if (head == NULL || *head == NULL)
		return (0);
	*head = temp->next;
	nodeData = temp->n;
	free(temp);

	return (nodeData);
}

