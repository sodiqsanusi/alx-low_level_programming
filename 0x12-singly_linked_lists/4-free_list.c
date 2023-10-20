#include "lists.h"

/**
* free_list - Frees the memory of a singly-linked list
* @head: A pointer to the head of the list to be freed
*
* Return: "void" Nothing
*/
void free_list(list_t *head)
{
	nodePtr temp = head;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

