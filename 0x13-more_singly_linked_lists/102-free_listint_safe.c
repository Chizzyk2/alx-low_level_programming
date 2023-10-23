#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - linked list is free
 * @h: points
 * Return: node
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *tep;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tep = (*h)->next;
			*h = tep;
			len++;
		}
		else
		{
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
