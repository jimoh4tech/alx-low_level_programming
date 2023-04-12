#include "search_algos.h"

/**
 * linear_search - searches for a given value in a array in a linear fashion
 * @array: Pointer to th first element in the array
 * @size: Number of elements in the array
 * @value: Value to be seached against the array
 *
 * Return: f value is not present in array or if array is NULL,
 * your function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
