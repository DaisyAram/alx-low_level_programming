#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: number of parameters passed to the function
 * @...: variable number of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int a, sum = 0;

	if (n == 0)
	return (0);

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
	sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
