#include "main.h"
#include <stdio.h>

void handle_error(int err_no, char **av, int close_err_fd);
/**
 * main - a program that copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector (Array of arguments)
 *
 * Return:
 *		- 0 on success, or
 *		- 97, if the number of arguments is not correct (i.e. 3)
 *		- 98, if failure occurs regarding the source file
 *		- 99, if failure occurs regarding the destination file
 *		- 100, if failure occurs when closing a file
 */
int main(int ac, char **av)
{
	int src_fd, dst_fd, close_stat;
	ssize_t bytes_read, bytes_written;
	char read_buf[RDBUFF_SIZE] = {0};

	if (ac != 3)
		handle_error(97, av, -1);

	/* Open the files */
	src_fd = open(av[1], O_RDONLY);
	if (src_fd == OPEN_ERR)
		handle_error(98, av, -1);
	dst_fd = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (dst_fd == OPEN_ERR)
		handle_error(99, av, -1);

	/* Copy src to dst */
	do {
		bytes_read = read(src_fd, read_buf, RDBUFF_SIZE - 2);
		if (bytes_read == RDWR_ERR)
			handle_error(98, av, -1);
		bytes_written = write(dst_fd, read_buf, bytes_read);
		if (bytes_written == RDWR_ERR)
			handle_error(99, av, -1);
	} while (bytes_read != RDWR_EOF);

	/* Close the files */
	close_stat = close(src_fd);
	if (close_stat == -1)
		handle_error(100, av, src_fd);
	close_stat = close(dst_fd);
	if (close_stat == -1)
		handle_error(100, av, dst_fd);
	return (0);
}

/**
 * handle_error - function used to handle error codes
 * @err_no: error number
 * @av: argument vector (Array of arguments passed to main function)
 * @close_err_fd: file descriptor of a file that failed to close
 *
 * Return: void
 */
void handle_error(int err_no, char **av, int close_err_fd)
{
	switch (err_no)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_err_fd);
			exit(100);
		break;
	}
}
