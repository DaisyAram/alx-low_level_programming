#include <unistd.h>

/**
 * _putchar - Writes the character  c to stdout
 *@c: character to print
 * return: 1 (Success).
 * on error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
