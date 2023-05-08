#include "main.h"
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file to read
 * @letters: maximum number of letters to read and print
 *
 * Return: number of bytes read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024];
	ssize_t readed;
	ssize_t written;
	int file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);
	if (!filename)
		return (0);

	readed = read(file_descriptor, buffer, letters);
	if (readed == -1)
	{
		close(file_descriptor);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, readed);
	if (written == -1)
	{
		close(file_descriptor);
		return (0);
	}

	if (written != readed)
		return (0);
	return (readed);
}
