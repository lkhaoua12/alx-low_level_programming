/**
 * _strcat - concat two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lenght = 0;
	int c2, i;

	for  (i = lenght; dest[i] != '\0'; i++)
	{
		lenght++;
	}
	for (c2 = 0; src[c2] != '\0'; c2++)
	{
		dest[lenght] = src[c2];
		lenght++;
	}
	return (dest);
}

