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

	if (b == NULL)
	return;

	va_start;
	for (b = 0; b < n; b++)
	{
	printf("%d", va_args(list, n));
	printf("\n")
	va_end(list);

}
