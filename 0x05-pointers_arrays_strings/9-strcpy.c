/**
 * _strcpy - funtion that copies the content of a str
 * @desc: address of the string destination
 * @src: address to copy from
 * Return: The address of the copy
 */

char *_strcpy(char *desc, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		desc[i] = src[i];
	desc[i] = '\0';
	return (desc);
}
