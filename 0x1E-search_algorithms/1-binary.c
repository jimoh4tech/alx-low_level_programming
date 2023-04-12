#include "search_algos.h"

/**
 * binary_search - searches for a value in a binary fashion
 * @array: pointer to the first element
 * @size: number of elements in the array
 * @value: value to be searched against the array
 *
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = (size - 1); high >= low;)
	{
		printf("Searching in array: ");
		for (idx = low; idx < high; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		idx = low + (high - low) / 2;
		if (array[idx] == value)
			return (idx);
		else if (array[idx] < value)
			low = idx + 1;
		else
			high = idx - 1;
	}
	return (-1);
}
