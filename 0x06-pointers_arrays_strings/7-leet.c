#include "main.h"
/**
 * leet - encodes to 1337speak
 * @i: input value
 * Return: nivalue
 */
char *leet(char *i)
{
	int a;

	int b;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; i[a] != '\0'; a++)
	{
	for (b = 0; b < 10; b++)
	{
	if (i[a] == s1[b])
	{
	i[a] = s2[b];
	}
	}
	}
	return (i);
}

