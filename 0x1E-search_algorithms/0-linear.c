# include "search_algos.h"
# include <stdio.h>
/**
 * linear_search - searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in an array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	/*if current element matchesthe target return index*/
	if (array[i] == value)
	{
		return (i);
	}
	/* if target is not found return -1*/
	return (-1);
}
