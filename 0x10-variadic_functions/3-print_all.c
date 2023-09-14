#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_all - a function that prints anything.
 *
 * @format: a list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	int flag;
	char *str;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str)
					printf("%s", str);
				else if (!str)
					printf("(nil)");
				flag = 1;
				break;
			default:
				flag = 0;
				break;
		}
		if (flag && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
