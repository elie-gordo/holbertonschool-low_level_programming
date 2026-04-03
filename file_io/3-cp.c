#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * close_fd - closes a file descriptor or exits on failure
 * @fd: file descriptor to close
 */
static void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * exit_with_error - prints an error message and exits
 * @code: exit code
 * @name: file name for the message
 */
static void exit_with_error(int code, const char *name)
{
	if (code == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (code == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
	else if (code == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);

	exit(code);
}

/**
 * write_all - writes all bytes from a buffer to a file descriptor
 * @fd: destination file descriptor
 * @buffer: source buffer
 * @count: number of bytes to write
 *
 * Return: 0 on success, -1 on failure
 */
static int write_all(int fd, char *buffer, ssize_t count)
{
	ssize_t total;
	ssize_t written;

	total = 0;
	while (total < count)
	{
		written = write(fd, buffer + total, count - total);
		if (written == -1)
			return (-1);
		total += written;
	}

	return (0);
}

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: arguments vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t bytes_read;
	char buffer[1024];

	if (ac != 3)
		exit_with_error(97, NULL);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		exit_with_error(98, av[1]);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_fd(fd_from);
		exit_with_error(99, av[2]);
	}

	bytes_read = read(fd_from, buffer, 1024);
	while (bytes_read > 0)
	{
		if (write_all(fd_to, buffer, bytes_read) == -1)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			exit_with_error(99, av[2]);
		}
		bytes_read = read(fd_from, buffer, 1024);
	}

	if (bytes_read == -1)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		exit_with_error(98, av[1]);
	}

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
