#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: pointer to the head pointer
 * @idx: index to add the node
 * @n: value to the inserted to the list
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 1; temp && i <= idx; i++)
	{
		if (i == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
