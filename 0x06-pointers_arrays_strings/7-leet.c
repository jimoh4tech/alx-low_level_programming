/**
 * leet - funtion that replaces some characters
 * @s: Address of the string
 * Return: @s address
 */

char *leet(char *s)
{
	int i, j;
	int l[] = {97, 101, 111, 116, 108};
	int u[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 5; j++)
			if (s[i] == l[j] || s[i] == u[j])
			{
				s[i] = n[j];
				break;
			}

	return (s);
}
