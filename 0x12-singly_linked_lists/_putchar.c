#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 * Return: on success 1
 * on error: -1 ,and errorno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
