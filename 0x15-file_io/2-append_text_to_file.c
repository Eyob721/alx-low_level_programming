#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text content to be written on the new file
 *
 * Return: 1 on success, or -1 on error
 */
int append_text_to_file(const char *filename, const char *text_content)
{
	int fd, total_written = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		total_written = write(fd, text_content, strlen(text_content));
	if (total_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
