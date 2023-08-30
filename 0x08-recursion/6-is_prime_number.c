#include "main.h"

int actual_prime(int n, int j);
/**
 * is_prime_number - determines if an integer ia s prime number or not
 * @n: input value
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculate if a number is prime recursively
 * @n: input value
 * @j: iterator
 * Return: 1 if n is prime and 0 if not
 */
int actual_prime(int n, int j)
{
	if (j == 1)
	return (1);
	if (n % j == 0 && j > 0)
	return (0);
	return (actual_prime(n, j - 1));
}
