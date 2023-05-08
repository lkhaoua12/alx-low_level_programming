#include "main.h"
/**
 * create_file - creates a file and writes text content to it
 * @filename: name of the file to create
 * @text_content: the text to write to the file (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t written_bytes;
	mode_t mode = S_IRUSR | S_IWUSR;
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		written_bytes = write(fd, text_content, _strlen(text_content));
		if (written_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
/**
 * _strlen - computes the length of a string
 * @s: the string to compute the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;
	char *p = s;

	while (*p)
	{
		length++;
		p++;
	}
	return (length);
}
