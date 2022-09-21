#include<unistd.h>

/**
 * _putchar - writes a char to stdout
 *
 * @c - parameter of type char
 *
 * Return: 1 or -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
