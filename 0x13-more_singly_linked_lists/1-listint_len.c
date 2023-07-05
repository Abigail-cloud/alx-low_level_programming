#include "lists.h"

/**
 * listint_len - number of elements in a linked lists
 * @h: linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t ele = 0;

	while (h)
	{
		ele++;
		h = h->next;
	}

	return (ele);
}
