#include "main.h"

/**
 * create_file -  creates a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL) /** if the filename is null */
	{
	return (-1);
	}

	/** if text_content is not null */
	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
	len++;
	}

	/** open the new file, create,enable permissions and truncate it */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC);

	/** write the file */
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)/** if err in file and cannot be written */
	return (-1);
	close(fd);
	return (1);
}
