#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: text content to be written on the new file
 *
 * Return: 1 on success, or -1 on error
 */
int create_file(const char *filename, const char *text_content)
{
	int fd, total_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	total_written = write(fd, text_content, strlen(text_content));
	if (total_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
