#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: pointer to the binary
 *
 * Return: the decimal value, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 1;
	int len;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;

	while (len >= 0)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		else if (b[len] == '1')
			dec += i;

		i *= 2;
		--len;
	}

	return (dec);
}
