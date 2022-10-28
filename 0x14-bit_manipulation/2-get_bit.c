#include "main.h"

/**
 * get_bit - gets the bit at a given index
 * @n: the number
 * @index: the index to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > INT_BITS)
		return (-1);

	bit = ((n >> index) & 1); /*shift n right by index and with 1 to find bit*/

	return (bit);
}
