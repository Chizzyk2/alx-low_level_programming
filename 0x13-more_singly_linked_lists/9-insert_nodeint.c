#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - new node is inserted
 * @head: points
 * @idx: insert
 * @n: int
 * Return: node
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_call, *tmp;
	unsigned int j = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	tep = *head;
	for (; j < idx - 1 && tep != NULL; j++)
		tep = tep->next;
	if (tep == NULL)
		return (NULL);
	}
	node_call = malloc(sizeof(listint_t));
	if (node_call == NULL)
		return (NULL);
	node_call->n = n;
	if (idx == 0)
	{
		node_call->next = *head;
		*head = node_call;
		return (node_call);
	}
	node_call->next = tep->next;
	tep->next = node_call;
	return (node_call);
}
