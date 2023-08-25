#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints buffer
 * @size: size
 * @b: buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int r;
	int w;
	int a;

	r = 0;

	if (size <= 0)
	{
	printf("\n");
	return;
	}
	while (r < size)
	{
	w = size - r < 10 ? size - r : 10;
	printf("%08x: ", r);
	for (a= 0; a < 10; a++)
	{
	if (a < w)
	printf("%02x", *(b + r + a));
	else
	printf(" ");
	if (a % 2)
	{
	printf(" ");
	}
	}
	for (a = 0; a < w; a++)
	{
	int c = *(b + r + a);

	if (c < 32 || c > 132)
	{
	c = '.';
	}
	printf("%c", c);
	}
	printf("\n");
	r += 10;
	}
}
