#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - new node
 * @head: Address
 * @n: Int
 * Return:new node
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);

	tp->n = n;
	tp->next = *head;
	*head = tp;
	return (*head);
}
