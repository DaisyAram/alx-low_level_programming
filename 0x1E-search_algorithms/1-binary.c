#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 *
 * Return: index else -1 for fail 
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	if (array == NULL)/*null array*/
	return (-1);

	printf("Searching in array: ");
	for (low = 0; low < size; low++)/*iterate on lower segment*/
	{
	if (low > 0)
	printf(", ");
        printf("%d, ", array[low]);
	}
	printf("\n");

	while (low <= high)/*check for mid value*/
	{
	mid = low + (high - low) / 2;
	if (array[mid] == value)/*if mid is equal to value*/
	{
	printf("Found %d at index: %ld\n\n", value, mid);
	return (mid);
	}
	
	if (array[mid] < value)
	{
	low = mid + 1;
	printf("Searching in array: [%d, ", array[low]);
	printf("%d]\n", array[high]);
        }

	else
        {
	high = mid - 1;
	printf("Searching in subarray: [%d, ", array[low]);
	printf("%d]\n", array[high]);
        }
	if (low > high) /*low is greater than high, the value is not in the array */
	{
	printf("Value checked array[%ld] = [%d]\n", high, array[high]);
	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	printf("Value %d not present in array\n", value);
	return (-1);
        }

	printf("Searching in array: [%d, ", array[low]);
	printf("%d]\n", array[high]);
	}
}
