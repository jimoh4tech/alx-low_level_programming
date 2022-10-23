#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - realloc a memory address
 * @ptr: current address
 * @old_size: old size of the address
 * @new_size: new size of the address
 *
 * Return: pointer to the new address
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *tmp_p;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			free(p);
			return (NULL);
		}

		free(ptr);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	tmp_p = ptr;
	for (i = 0; i < old_size; i++)
		p[i] = tmp_p[i];
	free(ptr);
	return (p);
}
