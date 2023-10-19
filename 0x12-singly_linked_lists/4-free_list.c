#include "lists.h"

/**
* free_list - Frees the memory of a singly-linked list
* @head: A pointer to the head of the list to be freed
*
* Return: "void" Nothing
*/
void free_list(list_t *head)
{
	if (head == NULL)
		free(head);
	while (head->next)
	{
		list_t *temp = head;

		head = head->next;
		free(temp);
	}
	free(head);
}

