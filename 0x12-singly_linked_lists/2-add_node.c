#include "lists.h"

/**
 * add_node - insert new node into signly linked list
 * @head: pointer to the pointer of the head
 * @str: pointer to the string
 *
 * Return: pointer to the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
