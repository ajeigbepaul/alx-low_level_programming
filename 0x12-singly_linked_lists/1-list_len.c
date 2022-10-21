#include "lists.h"
/**
 * list_len - Finds the number of element
 * @h: The linked list_t list
 *
 * Return: The number of elements in h
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
