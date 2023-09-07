#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @new_size: the new size, in bytes of the new memory block
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @ptr: pointer to the memory previously allocated with a call to malloc
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	ptr = malloc(new_size);

	if (new_size == old_size)
	return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
