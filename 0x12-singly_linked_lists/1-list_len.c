#include "lists.h"

/**
 * list_len - returns the no of elements
 * Description: a func that returns the no of elements
 * @h: singly linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
