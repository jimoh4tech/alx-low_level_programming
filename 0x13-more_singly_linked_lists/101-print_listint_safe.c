#include "lists.h"

/**
 * print_listint_safe - safe prints the list
 * @head: pointer to the head
 *
 * Return: the number of node in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	long int diff;

	while (head)
	{
	  diff = head - head->next;
	  printf("[%p] %d\n", (void *)head, head->n);
	  if (diff > 0)
	  	head = head->next;
	  else
	  {
	  	printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		break;
	  }
	  i++;
	}
	return (i);
}
