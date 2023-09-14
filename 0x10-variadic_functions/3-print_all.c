#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format:list of types of arguments passed to the function
 * ...: a variable  number of the strings to be printed
 *
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *s, *sep = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
	while (format[j])
	{
	switch (format[j])
	{
	case 's':
	s = va_arg(list, char*);
	if (!s)
	s = "(nil)";
	printf("%s%s", sep, s);
	break;
	case 'c':
	printf("%s%c", sep, va_arg(list, int));
	break;
	case 'i':
	printf("%s%d", sep, va_arg(list, int));
	break;
	case 'f':
	printf("%s%d", sep, va_arg(list, int));
	break;
	default:
	j++;
	continue;
	}
	sep = ", ";
	j++;
	}
	}
	printf("\n");
	va_end(list);
}
