#include "lists.h"

/**
* sum_dlistint - Sum all integer data of the list
* @head: "dlistint_t *" A pointer to the head of the linked list
*
* Return: "int" The sum of the integer data of the list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	nodePtr currentNode = head;

	while (currentNode)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}
	return (sum);
}

