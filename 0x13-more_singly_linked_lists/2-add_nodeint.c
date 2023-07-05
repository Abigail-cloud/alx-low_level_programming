#include "lists.h"

/**
 * add_nodeint - function that adds new element
 * at the beginning of a listint_t
 *
 * @head: parameter double pointer
 * @n: Parameter with the value of data
 *
 * Return: The new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
