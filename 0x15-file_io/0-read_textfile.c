#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @letters: number of letters it should read and print
 * @filename: filename
 * Return: actual number of letters it could read and print
 * if file cannot be open or read , or filename is NULL,
 * or write fails return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buff;
	ssize_t r;
	ssize_t w;

	/** open the file in read mode only */
	fd = open(filename, O_RDONLY);
	if (fd == -1)/** if err occurs */
	return (0);

	/**processing - read only permissions */
	buff = malloc(sizeof(char) * letters);

	r = read(fd, buff, letters);

	w = write(STDOUT_FILENO, buff, r);

	/**free buffer and close the file */
	free(buff);
	close(fd);
	return (w);
}
