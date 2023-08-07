#include "main.h"
#include <unistd.h>

/**
 * append_text_to_file - a function that appends text to a file
 * @filename: name of the file
 * @text_content: null terminated string, to be appended to the file
 *
 * Return: 1 on success, or -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == OPEN_ERR)
		return (-1);
	if (text_content != NULL && *text_content != '\0')
	{
		bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written == RDWR_ERR)
			return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: a string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s != NULL && *(s++) != '\0')
		len++;
	return (len);
}
