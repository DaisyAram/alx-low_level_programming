#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @n: number of bytes in s2
 * @s1: string one
 * @s2: string to concatenate from
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int a, b, len1, len2;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
	;

	for (b = 0; s2[b] != '\0'; b++)
	;

	if (n > b)
	n = b;

	len1 = a + n;
	s = malloc(len1 + 1);
	if (s == NULL)
	return (NULL);
	for (len2 = 0; len2 < len1; len2++)
	if (len2 < a)
	s[len2] = s1[len2];
	else
	s[len2] = s2[len2 - a];
	s[len2] = '\0';
	return (s);
}
