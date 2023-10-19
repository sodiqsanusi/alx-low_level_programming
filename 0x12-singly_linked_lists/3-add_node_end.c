#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a singly-linked list
* @head: A pointer to a pointer to the first node
* @str: A const pointer to a string literal
*
* Return: "list_t" A pointer to the address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int count = 0;
	list_t *newNode = NULL;
	list_t *currentNode = NULL;

	while (str[count])
		count++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = count;
	newNode->next = NULL;

	if (*head == NULL)
		return (newNode);
	currentNode = *head;

	while (currentNode->next != NULL)
		currentNode = currentNode->next;
	currentNode->next = newNode;

	return (newNode);
}

