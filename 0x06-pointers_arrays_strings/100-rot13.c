/**
 * rot13 - function to encode string using rot13.
 * @str: address of the string.
 * Return: the encoded @str.
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] < 'n')
			|| (str[i] >= 'A' && str[i] < 'N'))
		{
			str[i] += 13;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z')
			 || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] -= 13;
		}
	}
	return (str);
}
