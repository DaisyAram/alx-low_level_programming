#include "main.h"

/**
 * read_textfile -  reads a text file and prints
 * it to the POSIX standard output.
 * @filename: filename
 * @letters: number of letters to be read and printed
 *
 * Return: actual number of letters it could read and print
 * if file can't be opened or read, or filename is NULL
 * or if write fails, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t r;
	ssize_t w;
	char *buff;

	fd = open(filename, O_RDONLY);/* opening filr in readonly*/
	if (fd == -1)/*err*/
	return (0);

	buff = malloc(sizeof(char) * letters);/*processing*/

	r = read(fd, buff, letters);

	w = write(STDOUT_FILENO, buff, r);

	free(buff);/*free memory aloocated*/
	close(fd);/*close the file descriptor*/
	return (w);
}
