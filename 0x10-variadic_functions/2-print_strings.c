#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 * Return:
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int b;
	char *s;

	va_start(list, n);
	for (b = 0; b < n; b++)
	{
	s = va_arg(list, char *);
	if (s == NULL)
	printf("nil");
	else
	printf("%s", s);
	if (b != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(list);

}
