#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 *				prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it read or print, or 0 if error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, total_written, total_read;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	total_read = read(fd, buffer, letters);
	if (total_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	total_written = write(STDOUT_FILENO, buffer, total_read);
	if (total_written == -1)
		total_written = 0;
	free(buffer);
	close(fd);
	return (total_written);
}
