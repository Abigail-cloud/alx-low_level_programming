#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list elements
 * @head: list_t freed
 */
void free_list(list_t *head)
{
	list_t *init;

	while (head)
	{
		init = head->next;
		free(head->str);
		free(head);
		head = init;
	}
}
