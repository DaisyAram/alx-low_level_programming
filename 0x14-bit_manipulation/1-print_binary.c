#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: input value
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int a;
	int j, count = 0;

	for (j = 64; j >= 0; j--)
	{
	a = n >> 1;
	if (a & 1)
	{
	_putchar('1');
	count ++;
	}

	else if (count)
	_putchar('0');
	}
	if (!count)
	_putchar('0');
}
