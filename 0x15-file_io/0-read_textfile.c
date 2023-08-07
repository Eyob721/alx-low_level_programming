#include "main.h"
#include <unistd.h>

/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 *				   standard output
 * @filename: name of the file
 * @letters: number of letters to read and write
 *
 * Return:
 *		- actual number of letter read and written
 *		- 0 if the filename is NULL, if an error occured during read and write
 *		  operation, or if the file can not be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t actual_letters = 0, bytes_read, bytes_written;
	int fd;
	char ch;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == OPEN_ERR)
		return (0);
	bytes_read = read(fd, &ch, 1);
	while (letters-- != 0 && bytes_read != RDWR_EOF && bytes_read != RDWR_ERR)
	{
		bytes_written = write(STDOUT_FILENO, &ch, 1);
		if (bytes_written == RDWR_ERR)
			return (0);
		actual_letters += bytes_read;
		bytes_read = read(fd, &ch, 1);
	}
	close(fd);
	return (actual_letters);
}
