#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 * ...: a variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int b;

	va_start(list, n);
	for (b = 0; b < n; b++)
	{
	printf("%d", va_arg(list, int));

	if (b != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
