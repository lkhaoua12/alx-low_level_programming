/**
 * _strcat - concat two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *b = src;
	int i, lenght = 0;
	int c;
	b = src;

	for (i = 0; dest[i] != '\0'; i++)
	{
		lenght++;
	}
	for (c = lenght + 1; *b != '\0'; c++)
	{
		dest[c] = *b;
		b++;
	}
	return dest;
}

