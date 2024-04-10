#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number or -1 for fail
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, start, i;

	if (array == NULL || size == 0)/* if array is empty or null, return -i*/
		return (-1);

	step = sqrt(size);/* calculate the step size */
	start = 0;/* initialize start index */

	while (start < size && array[start] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start += step;/* move the start index to the next step */
	}

	if (start >= size)/* if start index is greater than or equal to size*/
		return (-1);

	printf("Value found between indexes [%ld] and [%ld]\n", start - step, start);

	for (i = start - step; i <= start && i < size; i++)/*linear search*/
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);/* return index of value found*/
	}

	return (-1);/*value not found*/
}
