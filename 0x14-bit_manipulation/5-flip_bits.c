#include "main.h"

/**
* flip_bits - returns the number of bits you would
* need to flip to get from one number to another
* @n: first integer
* @m: second integer
* Return: the number of flips needed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int diff;

	/*xor n and b*/
	diff = n ^ m;

	/*keep shifting diff to right*/
	do {
		diff_bits += (diff & 1);
		diff >>= 1;
	} while (diff > 0);

	return (diff_bits);
}
