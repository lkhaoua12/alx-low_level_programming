#include "main.h"
#include <string.h> 
/**
 * *_strcpy - copie a string
 * @dest: new string
 * @src: string to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
