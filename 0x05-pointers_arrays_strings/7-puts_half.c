#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: string of to print
 * Return: void
 */
void puts_half(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
	b++;
	}
	if (b % 2 == 1)
	{
	a = (b - 1) / 2;
	a += 1;
	}
	else
	{
	a = b / 2;
	}

	for (; a < b; a++)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
