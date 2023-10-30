#include "main.h"
#include <stdio.h>

/**
 * close_file - closes a file
 * @file: file
 *
 * Return: nothing
 */

void close_file(int file)
{
	int c;

	c = close(file);

	if (c == -1)/*err*/
	{
	dprintf(STDERR_FILENO, "Can't close fd %d\n", file);
	exit(100);
	}
}

/**
 * define_buffer - allocates 1024 bytes of buffer
 * @file: file
 *
 * Return: point to a new allocated buffer
 */

char *define_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
	}
	return (buffer);
}

/**
 * main - checks the code
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 success
 */

int main(int ac, char *av[])
{
	int file_from, file_to, w, r;
	char *buffer;

	if (ac != 3)/*incorrect arg no*/
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	buffer = define_buffer(av[2]);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	file_from = open(av[1], O_RDONLY);
	r = read(file_from, buffer, 1024);

	do {
	if (file_from == -1 || r == -1)/*err*/
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	free(buffer);
	exit(98);
	}

	w = write(file_to, buffer, r);
	if (file_to == -1 || w == -1)/*err*/
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	free(buffer);
	exit(99);
	}

	r = read(file_from, buffer, 1024);
	file_to = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close(file_from);
	close(file_to);
	return (0);
}
