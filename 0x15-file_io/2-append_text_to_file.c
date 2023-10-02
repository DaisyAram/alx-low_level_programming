#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content:  NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL) /** if the filename is NULL */
	return (-1);

	if (text_content != NULL) /** text_content is not NULL */
	{
	for (len = 0; text_content[len];)
	len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND); /** enable permissions and append*/

	w = write(fd, text_content, len); /** write the file */
	if (fd == -1 || w == -1) /** err with the file*/
	return (-1);

	close(fd);
	return (1);
}
