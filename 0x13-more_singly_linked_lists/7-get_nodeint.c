#include "lists.h"

/**
 * get_nodeint_at_index - gets node at given index
 * @head: pointer to the head pointer
 * @index: index of the node
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	while (index)
	{
		head = head->next;
		--index;
	}
	temp = head;

	return (temp);
}
