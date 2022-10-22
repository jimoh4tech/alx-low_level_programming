/**
 * swap_int - function that swap the value of two integers
 * to 98 in the memory
 * @a: address of the first integer to be swap
 * @b: address of the second integer to be swap
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
