#include "main.h"
/**
 * main - entry point
 * @argc: nubmber of argument
 * @argv: array of pointer to argument
 * Return: 0 on succes.
 */
int main(int argc, char **argv)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	int fd, wd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, FILE_PERMISSIONS);
	do {
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytes_written = write(wd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (bytes_read > 0);
	if (close(fd) == -1 || close(wd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", (fd == -1) ? fd : wd);
		exit(100);
	}
	return (0);
}
