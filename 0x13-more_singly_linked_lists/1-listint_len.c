#include "lists.h"

/**
 * listint_len - calculates the length of the list
 * @h: pointer to the head
 *
 * Return: length of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
