#include "lists.h"

/**
 * pop_listint - removes the head node of a linked list
 * @head: pointer to the first element
 *
 * Return: the data inside the elements removed
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
