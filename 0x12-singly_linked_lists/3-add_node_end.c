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
	unsigned int strLength = 0;
	nodePtr currentNode = *head;
	nodePtr newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	if (str)
	{
		while (str[strLength])
			strLength++;
	}

	newNode->str = strdup(str);
	newNode->len = strLength;
	newNode->next = NULL;

	if (!head)
		return (newNode);
	if (currentNode == NULL)
		currentNode = newNode;
	else
	{
		while (currentNode->next)
			currentNode = currentNode->next;
		currentNode->next = newNode;
	}

	return (currentNode->next);
}

