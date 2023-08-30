#include "main.h"
/**
 * factorial - returns the factorial to a given number
 * @n: input
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
