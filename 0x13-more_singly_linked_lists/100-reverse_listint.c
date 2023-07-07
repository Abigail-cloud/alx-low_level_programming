#include "lists.h"

/**
 * reverse_listint - Linked list reversed
 * @head: pointer to the first node in linked list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = next;
	}

	*head = tmp;

	return (*head);
}

