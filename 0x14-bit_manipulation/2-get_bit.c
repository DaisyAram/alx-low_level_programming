#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index
 * @n: input value
 *
 * Return: the value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= 64) /** error */
	return (-1);

	bit_value = (n >> index) & 1;
	return (bit_value);
}
