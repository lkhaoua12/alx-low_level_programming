/**
 * _strcat - concat two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int c2;

	while (des[c])
	{
		c++;
	}
	for (c2 = 0; src[c2] ; c2++)
	{
		dest[c] = src[c2];
		c++;
	}
	return dest;
}

