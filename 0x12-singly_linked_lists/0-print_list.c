#include "lists.h"

/**
 * print_list - prints all elements of a singly linked list
 * @h: pointer to the header
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	char *str;

	while (h)
	{
		str = h->str;
		if (str == NULL)
			str = "(nil)";

		printf("[%d] %s\n", h->len, str);
		h = h->next;
		i++;
	}

	return (i);
}
