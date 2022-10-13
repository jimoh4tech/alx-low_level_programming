#include "variadic_functions.h"

/**
 * print_char - prints char
 * @c: va_list of char
 */

void print_char(va_list c)
{
printf("%c", va_arg(c, int));
}

/**
 * print_int - prints int
 * @n: va_list of int
 */

void print_int(va_list n)
{
printf("%d", va_arg(n, int));
}

/**
 * print_float - prints float
 * @f: va_list of float
 */

void print_float(va_list f)
{
printf("%f", va_arg(f, double));
}

/**
 * print_string - print a string
 * @s: va_list of string
 */

void print_string(va_list s)
{
char *str = va_arg(s, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}


/**
 * print_all - prints anything using specified formats
 * @format: strings format
 */

void print_all(const char * const format, ...)
{
  va_list any;
  int i = 0, j = 0;
  char *sep = "";

  func_print printers[] = {
			   {"c", print_char},
			   {"i", print_int},
			   {"f", print_float},
			   {"s", print_string}
  };
 va_start(any, format);

  while (format && format[i])
    {
      j = 0;
      while ((format[i] != *(printers[j].format)) && j < 4)
	j++;
      if (j < 4)
	{
	  printf("%s", sep);
	  printers[j].print_func(any);
	  sep = ", ";
	}
      i++;
    }
  printf("\n");
  va_end(any);
}
