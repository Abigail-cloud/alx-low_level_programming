#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in the list
 * @head: first node in the list
 * @index: index of the node
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}
