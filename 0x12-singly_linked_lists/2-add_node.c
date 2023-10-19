#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a singly-linked list
* @head: A pointer to a pointer that points to the first node
* @str: A pointer to a string to be used in the new node
*
* Return: "list_t"  A pointer to the newly created list
*/
list_t *add_node(list_t **head, const char *str)
{
	size_t count = 0;
	list_t *newNode = NULL;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	for (count = 0; *str; str++)
		;

	newNode->len = count;
	newNode->str = strdup(str);

	if (*head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	*head = newNode;

	return (*head);
}

