#include <stdio.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 *
 * @array: pointer to the element
 * @size: size of the array
 * @action: funtion to be executed on each array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
