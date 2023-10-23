#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node
 * @head: points
 * @index: index
 * Return: 1 if correct, -1
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *first, *second;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		second = (*head)->second;
		free(*head);
		*head = second;
		return (1);
	}
	first = *head;
	for (j = 0; j < index - 1; j++)
	{
		if (first->second == NULL)
			return (-1);
		first = first->second;
	}
	next = first->second;
	first->second = second->second;
	free(second);
	return (1);
}
