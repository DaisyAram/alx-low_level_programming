#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int j, c, n, len, f, digit;

	j = 0;

	c = 0;

	n = 0;

	len = 0;

	f = 0;

	digit = 0;

	while (s[len] != '\0')
	len++;
	while (j < len && f == 0)
	{
	if (s[j] == '-')
	++c;
	if (s[j] >= '0' && s[j] <= '9')
	{
	digit = s[j] - '0';
	if (c % 2)
	digit = -digit;
	n = n * 10 + digit;
	f = 1;
	if (s[j + 1] < '0' || s[j + 1] > '9')
	break;
	f = 0;
	}
	j++;
	}
	if (f == 0)
	return (0);
	return (n);
}
