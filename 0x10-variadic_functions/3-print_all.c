#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints any value passed
 * @format: pointer to the string
 */

void print_all(const char * const format, ...)
{
	int i = 0, v = 0, len = strlen(format);
	va_list any;
	char *str;

	va_start(any, format);

	while (format && format[i])
	{
		v = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(any, int));
			break;
		case 'i':
			printf("%d", va_arg(any, int));
			break;
		case 'f':
			printf("%f", va_arg(any, double));
			break;
		case 's':
			str = va_arg(any, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			v = 0;
			break;
		}
		if (i != (len - 1) && v)
			printf(", ");
		i++;
	}

	va_end(any);
	printf("\n");
}
