#include "main.h"
#include <stdio.h>

void close_file(int file);
char *define_buffer(char *file);

/**
 * close_file - closes file descriptor
 * @file: file to close
 *
 * Return: nothing
 */
void close_file(int file)
{
	int a;

	a = close(file);

	if (a == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
	}
}

/**
 * define_buffer - allocates 1024 bytes for a buffer
 * @file: file
 * Return: point to new allocated buffer
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
 * main - copies contents of one file to another
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, w, r;
	char *buffer;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buffer = define_buffer(argv[2]);
	r = read(file_from, buffer, 1024);

	do {
	if (file_from == -1 || r == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
	}
	w = write(file_to, buffer, r);
	if (file_to == -1 || w == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	free(buffer);
	exit(99);
	}

	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (r > 0);
	free(buffer);
	close(file_from);
	close(file_to);
	return (0);
}
