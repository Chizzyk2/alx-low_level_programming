#include "lists.h"

/**
 * add_nodeint_end - node
 * @head: points
 * @n: integer
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_call, *temp;

	new_node = malloc(sizeof(listint_t));
	if (node_call == NULL)
		return (NULL);

	node_call->n = n;
	if (*head == NULL)
	{
		node_call->next = *head;
		*head = node_call;
	}
	else
	{
		node_call->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = node_call;
	}
	return (node_call);
}
