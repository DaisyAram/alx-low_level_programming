#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @accept: input
 * @s: input
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
	for (b = 0; accept[b]; b++)
	{
	if (*s == accept[b])
	{
	a++;
	break;
	}
	else if (accept[b + 1] == '\0')
	return (a);
	}
	s++;
	}
	return (a);
}
