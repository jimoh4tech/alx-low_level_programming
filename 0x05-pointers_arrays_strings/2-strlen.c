/**
 * _strlen - function that returns the lenght of a string
 * @s: address of the string
 * Return: The lenght of the string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;

	return (len);
}
