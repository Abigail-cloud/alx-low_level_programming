#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the list of all the elements of the
 * list_t
 * @h: The list_t
 *
 * Return: The printed number of nodes in list_t
 */

size_t print_list(const list_t *h)
{
	size_t head = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		head++;
		h = h->next;
	}

	return (head);
}
