#include "main.h"

void handle_error(int code, char *argv[], int fd_value);

/**
 * main - a program that copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vectors
 *
 * Return: 0 on success, or codes (97, 98, 99, or 100) on error
 */
int main(int argc, char *argv[])
{
	int fd_old, fd_new, total_read = 1, total_written = 1, close_status;
	char buffer[1024] = {0};

	if (argc != 3)
		handle_error(97, argv, -1);
	fd_old = open(argv[1], O_RDONLY);
	if (fd_old == -1)
		handle_error(98, argv, -1);
	fd_new = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_new == -1)
	{
		close(fd_old);
		handle_error(99, argv, -1);
	}
	while (total_read != 0)
	{
		total_read = read(fd_old, buffer, 1024);
		if (total_read == -1)
		{
			close(fd_old);
			close(fd_new);
			handle_error(98, argv, -1);
		}
		total_written = write(fd_new, buffer, total_read);
		if (total_written == -1)
		{
			close(fd_old);
			close(fd_new);
			handle_error(99, argv, -1);
		}
	}
	close_status = close(fd_old);
	if (close_status == -1)
		handle_error(100, argv, fd_old);
	close_status = close(fd_new);
	if (close_status == -1)
		handle_error(100, argv, fd_new);
	return (0);
}

/**
 * handle_error - a function that handles the different error codes
 * @code: error code
 * @argv: argument vectors passed to the program
 * @fd_value: fd value of the file failed to close
 *
 * Return: void
 */
void handle_error(int code, char *argv[], int fd_value)
{
	switch (code)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
		exit(100);
	}
}
