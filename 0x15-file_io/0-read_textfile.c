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
	ssize_t bytes_written;
	size_t bytes_read;
	size_t fp;
	char *buffer;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if ((ssize_t)fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}

	bytes_read = read(fp, buffer, letters);
	if ((ssize_t)bytes_read == -1)
	{
		close(fp);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || (size_t) bytes_written != bytes_read)
	{
		close(fp);
		free(buffer);
		return (0);
	}
	close(fp);
	free(buffer);
	return (bytes_written);
}

