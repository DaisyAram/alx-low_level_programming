#include "search_algos.h"
#include <stdio.h>

/**
  * interpolation_search - Searches for a value in a sorted array
  * of integers using interpolation search.
  * @array: pointer to the first element of the array to search in
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: index or -1 for faill
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t mid, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
	mid = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (mid < size)
			printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			break;
		}

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}

	return (-1);
}
