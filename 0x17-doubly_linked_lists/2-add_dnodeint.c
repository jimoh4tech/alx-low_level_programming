#include "lists.h"

/**
 * add_dnodeint - adds a node to the begining of double linkedlist
 * @head: pointer to the head
 * @n: node integer to be added
 *
 * Return: address of the new node or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (*head);
}
