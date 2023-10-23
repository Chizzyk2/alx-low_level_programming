#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Free a list
 * @head: Address
 * Return: Null
 **/

void free_listint2(listint_t **head)
{
	listint_t *tep;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tep = (*head)->next;
		free(*head);
		*head = tep;
	}
}
