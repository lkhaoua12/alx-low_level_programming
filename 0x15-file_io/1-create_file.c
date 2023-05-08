#include "main.h"

int create_file(const char *filename, char *text_content)
{
	ssize_t written_bytes;
	mode_t mode = S_IRUSR | S_IWUSR;
	int fp;

	if (filename == NULL)
	{
		return (-1);
	}
	
	fp = open(filename, O_CREAT | O_WRONLY, mode);

	if (text_content != NULL)
	{
		written_bytes = write(fp, text_content, _strlen(text_content));
	}
	if (written_bytes == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}

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
