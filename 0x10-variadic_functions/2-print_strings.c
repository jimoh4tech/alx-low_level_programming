#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints seperated strings
 * @separator: pointer to the seperator
 * @n: length of the args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list strs;
char *temp;

if (separator != NULL && n != 0)
{
va_start(strs, n);
for (i = 0; i < n; i++)
{
  temp = va_arg(strs, char *);
  if (temp == NULL)
    printf("(nil)");
  else
    printf("%s", temp);
if (i != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(strs);
}
}
