#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memort to be filled
 * @b: value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
	s[j] = b;
	n--;
	}
	return (s);
}
