#include "search_algos.h"

/**
 * jump_search - searches for a value using in sorted array
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located or -!
 */

int jump_search(int *array, size_t size, int value)
{
	size_t idx, jump, step;

	if (array == NULL || size == 0 || !value)
		return (-1);

	step = sqrt(size);
	for (idx = 0, jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		idx = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] an [%ld]\n", idx, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; jump && array[idx] < value; idx++)
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	return (array[idx] == value ? (int)idx : -1);
}
