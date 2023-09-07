#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @c: memory area to be filled
 * @d: char to copy
 * @n: number of times to copy
 *
 * Return: pointer to thememory area s
 */
char *_memset(char *c, char d, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
	c[j] = d;
	}
	return (c);
}

/**
 * *_calloc -allocates memory for an array
 * @size: size of each element
 * @nmemb: number of elements in the array
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
