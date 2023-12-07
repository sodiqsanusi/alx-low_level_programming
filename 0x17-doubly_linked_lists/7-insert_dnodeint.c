#include "lists.h"

/**
* insert_dnodeint_at_index - Insert a new node to a given position in the list
* @h: "dlistint_t **" A pointer to a pointer to the head of the list
* @idx: "unsigned int" The index at which the node should be inserted
* @n: "int" The data to be stroed in the new node
*
* Return: "dlistint_t *" A pointer to the updated list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	nodePtr currentNode = *h;
	nodePtr newNode = malloc(sizeof(dlistint_t));
	unsigned int iterator = idx;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	if (idx == 0)
	{
		(*h)->prev = newNode;
		newNode->next = *h;
		*h = newNode;
		return (*h);
	}
	if (*h == NULL)
		return (NULL);
	while (iterator > 1)
	{
		iterator--;
		currentNode = currentNode->next;
		if (!currentNode)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->prev = currentNode;
	newNode->next = currentNode->next;
	currentNode->next->prev = newNode;
	currentNode->next = newNode;
	return (newNode);
}

