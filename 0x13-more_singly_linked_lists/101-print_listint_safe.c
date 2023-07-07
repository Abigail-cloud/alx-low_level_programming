#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of special elements
 *  @head: A pointer to the head of linked list
 *  Return: If the linked list is not looped - 0.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *torty, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	torty = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (torty == hare)
		{
			torty = head;
			while (torty != hare)
			{
				nodes++;
				torty = torty->next;
				hare = hare->next;
			}

			torty = torty->next;
			while (torty != hare)
			{
				nodes++;
				torty = torty->next;
			}

			return (nodes);
		}

		torty = torty->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t
 * @head: A pointer to the head of the listint_t
 *
 * Return: The number of nodes in listint_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

