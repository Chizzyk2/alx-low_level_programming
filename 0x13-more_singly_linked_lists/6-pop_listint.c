#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes node
 * @head: Points
 * Return: Node
 **/

int pop_listint(listint_t **head)
{
	listint_t *tep;
	int my_data;

	if (*head == NULL)
		return (0);

	tep = *head;
	*head = tep->next;
	my_data = tep->n;
	free(tep);
	return (val);
}
