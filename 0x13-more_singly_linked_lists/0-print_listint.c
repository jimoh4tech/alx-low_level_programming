#include "lists.h"

/**
 * print_listint - prints all integer in the list
 * @h: pointer to the head
 *
 * Return: length of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
