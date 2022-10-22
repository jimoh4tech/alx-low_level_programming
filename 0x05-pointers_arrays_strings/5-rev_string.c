/**
 * rev_string - function that reverse in the string in the memory
 * @s: address of the character sequence
 */

void rev_string(char *s)
{
	int len, i;
	char ch;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = ch;
	}
}
