#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of singly listint_t
 * @h: A pointer to the head of the list_t
 *
 * Return: The number of nodes singly listint_t
 */
size_t print_listint(const listint_t *h)
{
	size_t ele = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		ele++;
	}

	return (ele);
}
