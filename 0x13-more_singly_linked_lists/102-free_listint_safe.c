#include "lists.h"

/**
 * free_listint_safe - frees list
 * @h: pointer to the head pointer
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *temp;
	long int diff;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		i++;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	*h = NULL;

	return (i);
}
