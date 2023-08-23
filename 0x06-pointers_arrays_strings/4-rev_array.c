#include "main.h"

/**
 * reverse_array - reverses number of elements in an array
 * @n: number of elements in the array
 * @a: array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	int j;

	for (i = 0; i < n--; i++)

	{
	j = a[i];
	a[i] = a[n];
	a[n] = j;
	}
}
