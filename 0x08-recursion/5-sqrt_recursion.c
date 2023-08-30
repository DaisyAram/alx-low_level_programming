#include "main.h"
int actual_sqrt_recursion(int n, int j);
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: input value
 * Return: resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find the
 * natural square root of a number
 * @n: value
 * @j: iterator
 * Return: resulting square root
 */
int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
	return (-1);
	if (j * j == n)
	return (j);
	return (actual_sqrt_recursion(n, j + 1));
}
