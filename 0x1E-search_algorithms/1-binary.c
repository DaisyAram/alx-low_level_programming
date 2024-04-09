#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 *
 * Return: mid index else -1 for fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = ((low + high) / 2);
		printf("Searching in array:");

		for (i = low; i <= high; i++)
		{
			if (i != low)
			{
				printf(", ");
			}
			printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid -  1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
