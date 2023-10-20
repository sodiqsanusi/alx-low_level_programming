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
	if (*head == NULL)
		*head = newNode;
	else
	{
		newNode->next = currentNode;
		*head = newNode;
	}

	return (*head);
}

