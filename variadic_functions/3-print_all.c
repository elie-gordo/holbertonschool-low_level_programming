#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *sep;
	char *str;
	int printed;

	i = 0;
	sep = "";
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		printed = 1;
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				while (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				printed = 0;
		}
		if (printed == 1)
			sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
