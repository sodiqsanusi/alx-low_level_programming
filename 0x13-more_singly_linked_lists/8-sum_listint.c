#include "lists.h"

/**
* sum_listint - Sum of all the data in a linked list
* @head: Pointer to the head of a linked list
*
* Return: "int" The sum of the data in a linked list
*/
int sum_listint(listint_t *head)
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

