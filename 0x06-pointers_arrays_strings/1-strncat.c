/**
 * _strncat - concat two strings
 * @dest: first string
 * @src: second string
 * @n: number of char to concat
 * Return: dest
 */
*_strncat(char *dest, char *src, int n)
{
	int lenght = 0;
	int c2, i;

	for  (i = lenght; dest[i] != '\0'; i++)
	{
		lenght++;
	}
	for (c2 = 0; src[c2] != src[n]; c2++)
	{
		dest[lenght] = src[c2];
		lenght++;
	}
	return (dest);
}
