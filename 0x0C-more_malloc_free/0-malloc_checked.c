#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocate some memory
 * @b: size of the memory to allocate
 *
 * Return: address of the memory allocated
 */

void *malloc_checked(unsigned int b)
{
void *m;
m = malloc(b);
if (m == NULL)
exit(98);
return (m);
}
