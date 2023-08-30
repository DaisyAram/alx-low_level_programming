#include "main.h"

int check_pal(char *s, int j, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to be reversed
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (s == 0)
	return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal- checks character recursively for palindrome
 * @s: string
 * @len: length of the string
 * @j: iterator
 * Return: 1 if palindrome and 0 if not
 */
int check_pal(char *s, int j, int len)
{
	if (*(s + 1) != *(s + len - 1))
	return (0);
	if (j >= len)
	return (1);
	return (check_pal(s, j + 1, len - 1));
}
