#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates and fill array with char
 * @size: size of the array
 * @c: character to fill the array with
 *
 * Return: NULL if @size is 0 else pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return ('\0');
	array = malloc(sizeof(c) * size);
	if (array == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
