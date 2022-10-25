#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: pointer to the head pointer
 * @index: index of the node to delete
 *
 * Return: 1 if success, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp = *head;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index)
	{
		if (!temp || temp->next)
			return (-1);
		temp = temp->next;
		++i;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
