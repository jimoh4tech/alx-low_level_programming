#include <stdio.h>

/**
 * print_name - prints name chars
 * @name: pointer to the name
 * @f: pointer to the funtion
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
