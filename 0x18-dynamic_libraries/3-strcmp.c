/**
 * _strcmp - function to compare @s1 and @s2
 * @s1: The address of the first string
 * @s2: Address of the second string
 * Return: lenght of their differnces
 */

int _strcmp(char *s1, char *s2)
{
	int cmp = 0;
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			break;
		}
		++i;
	}

	return (cmp);
}
