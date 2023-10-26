#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: input value
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)/*error*/
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);/*success*/
}
