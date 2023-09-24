#include "lists.h"

/**
 * list_len - prints the number of elements
 * @h: head pointer
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i;

	if (!h)
		return (0);

	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
