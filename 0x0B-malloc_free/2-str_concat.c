#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one to concatenate
 * @s2: string two to concatenate
 * Return: concatenate of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int a, b;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	a = b = 0;

	while (s1[a] != '\0')
	a++;

	while (s2[b] != '\0')
	b++;

	cat = malloc(sizeof(char) * (a + b + 1));
	if (cat == NULL)
	return (NULL);

	a = b = 0;

	while (s1[a] != '\0')
	{
	cat[a] = s1[a];
	a++;
	}
	while (s2[b] != '\0')
	{
	cat[a] = s2[b];
	a++, b++;
	}
	cat[a] = '\0';

	return (cat);
}
