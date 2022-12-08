#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of the list
 * @head: pointer to the head
 * @n: value of the new node
 *
 * Return: pointer to the head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;
	new->prev = tmp;
	return (new);
}
