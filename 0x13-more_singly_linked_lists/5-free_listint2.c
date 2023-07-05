#include "lists.h"

/**
 * free_listint2 - Logic that frees a listint_t
 *
 * @head: Parameter that point to linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
