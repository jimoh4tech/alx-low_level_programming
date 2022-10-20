#include "lists.h"

/**
 * add_node_end - insert new node into  the end of signly linked list
 * @head: pointer to the pointer of the head
 * @str: pointer to the string
 *
 * Return: pointer to the new head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	temp = *head;

	if (!*head)
		*head = new_node;
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
	}

	return (*head);
}
