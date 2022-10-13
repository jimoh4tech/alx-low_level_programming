#ifndef VARIADIC_FUNCTION
#define VARIADIC_FUNCTION

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct print - struct for print format
 *
 * @format: the format specifier
 * @print_func: pointer to funtion
 */

typedef struct print
{
char *format;
void (*print_func)(va_list arg);
} func_print;

#endif /* VARIADIC_FUNCTION */
