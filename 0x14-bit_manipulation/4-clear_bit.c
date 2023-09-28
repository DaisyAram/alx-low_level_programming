#include "main.h"

/**
 * clear_bit -sets the value of a bit to 0 at a given index
 * @index: index
 * @n: ptr to next value
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)/**error */
	return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
