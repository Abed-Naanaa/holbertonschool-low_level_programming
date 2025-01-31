#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * print_error - prints the error message and exits
 * @msg: the error message to print
 * @exit_code: the exit code
 */
void print_error(const char *msg, int exit_code)
{
	dprintf(2, "%s", msg);
	exit(exit_code);
}

/**
 * close_fd - closes a file descriptor and checks for errors
 * @fd: the file descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file_content - copies content from one file to another
 * @fd_from: file descriptor of the source file
 * @fd_to: file descriptor of the destination file
 */
void copy_file_content(int fd_from, int fd_to)
{
	ssize_t nread, nwrite;
	char buffer[BUF_SIZE];

	while ((nread = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		nwrite = write(fd_to, buffer, nread);
		if (nwrite != nread)
			print_error("Error: Can't write to file\n", 99);
	}

	if (nread == -1)
		print_error("Error: Can't read from file\n", 98);
}

/**
 * main - copies the content of one file to another
 * @argc: the number of arguments passed
 * @argv: the arguments passed
 *
 * Return: 0 on success, other exit codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	/* Check for correct number of arguments */
	if (argc != 3)
		print_error("Usage: cp file_from file_to\n", 97);

	/* Open the source file */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Open the destination file */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		close_fd(fd_from);
		exit(99);
	}

	/* Copy content */
	copy_file_content(fd_from, fd_to);

	/* Close the file descriptors */
	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
