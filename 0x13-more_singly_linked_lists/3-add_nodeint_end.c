#include "lists.h"

/**
 * add_nodeint_end - add new node to the end of the list
 * @head: pointer to the head pointer
 * @n: node integer value to be added
 *
 * Return: pointer to the head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	temp = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
	}

	return (*head);
}
