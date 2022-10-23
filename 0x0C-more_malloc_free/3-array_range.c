#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - fill an array from @min to @max inclusive
 * @min: minimum value
 * @max: maximum value
 *
 * Return: address of the array;
 */

int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
