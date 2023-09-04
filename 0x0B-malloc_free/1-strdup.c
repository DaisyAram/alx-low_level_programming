#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: char
 * Return:0
 */
char *_strdup(char *str)
{
	char *s;
	int j, k = 0;

	if (str == NULL)
	return (NULL);

	j = 0;
	while (str[j] != '\0')
	j++;

	s = malloc(sizeof(char) * (j + 1));
	if (s == NULL)
	return (NULL);

	for (k = 0; str[k]; k++)

	s[k] = str[k];

	return (s);
}

