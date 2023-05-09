#include "main.h"

int main(int argc, char **argv)
{
	ssize_t bytes_read, bytes_written;
	char buffer[1024];
	int fd;
	int wd;

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
	wd = open(argv[2], O_RDONLY | O_WRONLY | O_CREAT, 0664);
	if (wd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(100);
	}
	
	bytes_read = read(fd, buffer, 1024);
	bytes_written = write(wd, buffer, bytes_read);
	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(100);
	}

	return (0);
}
