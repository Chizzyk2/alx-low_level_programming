#include "lists.h"

/**
 * free_listint - free list
 * @head: points
 * Return: Null
 */
void free_listint(listint_t *head)
{
	listint_t *tep;

	while (head)
	{
		tep = head;
		head = head->next;
		free(tep);
	}
	free(head);
}
