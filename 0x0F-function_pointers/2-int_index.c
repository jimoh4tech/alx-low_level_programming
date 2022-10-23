#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: pointer to the integer
 * @size: size of the inetger
 * @cmp: funtion that compares the integers
 *
 * Return: index of the element or -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (array == NULL || size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
