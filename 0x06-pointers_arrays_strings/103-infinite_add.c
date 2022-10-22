/**
 * infinite_add - funtion to add to large numbers
 * @n1: address of first number
 * @n2: address of second number
 * @r: address to store the result
 * @size_r: length of the @r array
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;

	i -= 1;
	j -= 1;

	int c = 48;

	if (i >= j)
	{
		if ((i + 2) >= size_r)
			return (0);

		if (size_r > i + 1)
			size_r -= (size_r - i - 3);

		r[size_r - 1] = '\0';

		for (size_r -= 2; size_r >= 0; --size_r)
		{
			if (j < 0)
			{
				if ((n1[i] + c) % 48 <= 9)
				{
					if (i < 0)
						r[size_r] = c;
					else
						r[size_r] = (n1[i] + c) % 48 + 48;
					c = 48;
				}
				else
				{
					r[size_r] = (n1[i] + c) % 48 + 38;
					c = 49;
				}
			}
			else
			{
				if ((n1[i] + n2[j] + c) % 48 <= 9)
				{
					r[size_r] = (n1[i] + n2[j] + c) % 48 + 48;
					c = 48;
				}
				else
				{
					r[size_r] = (n1[i] + n2[j] + c) % 48 + 38;
					c = 49;
				}
			}
			--j;
			--i;
		}
	}
	return (r);
}

