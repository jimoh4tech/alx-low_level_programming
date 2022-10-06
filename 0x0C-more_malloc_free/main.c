#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  int *a;

  a = array_range(0, 10);
  simple_print_buffer(a, 11);
  free(a);
  
  return (0);
}
