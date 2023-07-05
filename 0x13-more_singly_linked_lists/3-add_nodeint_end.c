#include "lists.h"

/**
 * add_nodeint_end - Logic that adds a new node at the end
 * listint_t
 *
 * @head: Parameter double pointer
 * @n: Parameter with the value data
 *
 * Return: The new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *num;

	num = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (num->next)
		{
			num = num->next;
		}
		num->next = new;
	}

	return (new);
}
