#include "main.h"

/**
 * set_bit - sets the bit at a given index to 1
 * @n: pointer to the number
 * @index: index to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > INT_BITS)
		return (-1);

	mask <<= index; /*create mask based on index position*/

	*n = (*n | mask);

	return (1);
}
