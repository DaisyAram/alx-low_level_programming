#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int b, c;

	if (height <= 0 || width <= 0)
	return (NULL);

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	return (NULL);

	for (b = 0; b < height; b++)
	{
	a[b] = malloc(sizeof(int) * width);
	if (a[b] == NULL)
	{
	for (; a != 0; a--)
	free(a[b]);

	return (NULL);
	}
	}
	for (b = 0; b < height; b++)
	{
	for (c = 0; c < width; c++)
	a[b][c] = 0;
	}
	return (a);
}
