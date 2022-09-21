/**
 * reverse_array - funtion that reverse the integers in array
 * @a: Address of the function
 * @n: the lenght of the array
 */

void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
