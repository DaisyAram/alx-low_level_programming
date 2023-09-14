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
	char *s;

	va_list list;

	va_start(list, format);

	if (format)
	{
	while(format[j])
	{
	switch (format[j])

	{

	case 's':
	s = va_arg(list, char*);
	if (!s)
	s = "(nil)";
	printf("%s", s);
	break;

	case 'c':
	printf("%c", va_arg(list, int));
	break;

	case 'i':
	printf("%d", va_arg(list, int));
	break;

	case 'f':
	printf("%d", va_arg(list, int));
	break;
	default:
	j++;
	continue;
	}
	j++;
	}
	}
	printf("\n");
	va_end(list);

}
