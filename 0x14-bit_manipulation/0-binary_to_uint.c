#include <stddef.h>
#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 * @c: converted number
 * Return: converted number or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0;
	int a = 0;

	if (b == NULL)
	{
	return (0);
	}

	while (b[a] != '\0')
	{
	if (b[a] != '0' && b[a] != '1')
	{
	return (0);
	}
	c = c * 2 + (b[a]  - '0');
	a++;
	}
	return (c);
}
