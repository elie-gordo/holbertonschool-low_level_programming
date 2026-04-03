#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}

	i = 0;
	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}

	if (node == NULL)
		return (-1);

	node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	free(node);

	return (1);
}
