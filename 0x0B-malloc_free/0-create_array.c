#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array or chars
 * and initializes it with specific char c
 * @c: char to assign
 * @size: size of array
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	return (NULL);

	for (n = 0; n < size; n++)
	str[n] = c;
	return (str);
}
