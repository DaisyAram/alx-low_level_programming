#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: input value
 * @index: index
 *
 * Return: value of the bit index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= 64)
	return (-1);

	else
	{
	bit_value = (n >> index) & 1;
	}
	return (bit_value);
}

