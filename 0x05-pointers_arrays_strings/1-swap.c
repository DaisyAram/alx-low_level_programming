#include "main.h"

/**
 * swap_int - swaps the values of two integer.
 * @a : first integer ro be swapped.
 * @b : second integer to be swapped.
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
