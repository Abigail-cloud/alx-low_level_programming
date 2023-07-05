#include "lists.h"

/**
 * free_listint -  Logic that frees a listint_t
 *
 * @head: Parameter that point to the head
 */
void free_listint(listint_t *head)
{
	listint_t *num;

	while (head)
	{
		num = head->next;
		head->next;
		head = num;
	}
}
