#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0 if b is null or not binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int j = 0;

	if (b == NULL)
	{
	return (0);
	}
	while (b[j] != '\0')
	{
	if (b[j] != '0' && b[j] != '1')
	{
	return (0);
	}

	i = i * 2 + (b[j] - '0');
	j++;
	}
	return (i);
}
