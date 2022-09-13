#include"main.h"

/**
 * main - Entry point
 *
 * Description: A simple C program to print _putchar
 *
 * Return: 0
 */

int main(void)
{
char arr[] = "_putchar";
int index;

for (index = 0; index < 8; index++)
_putchar(arr[index]);

_putchar('\n');

return (0);
}
