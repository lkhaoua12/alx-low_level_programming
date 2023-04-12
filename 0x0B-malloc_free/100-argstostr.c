#include "main.h"

/**
 * get_lenght - get string lenght.
 * @str: string to check it lenght.
 * Return: int.
 */

int get_lenght(char *str)
{
	int lenght = 0;

	while (*str)
	{
		lenght++;
		str++;
	}
	return (lenght);
}

/**
 * argstostr - return pointer to new string
 * @ac: num of argument
 * @av: pointer to pointer
 * Return: char pointer.
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int ocp = 0;
	int k = 0;
	char *p;

	if (ac == 0 || !av)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++, ocp++)
	{
		ocp += get_lenght(*(av + i));
	}
	p = (char *)malloc(sizeof(char) * ocp + 1);
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j); j++)
		{
			*(p + k) = *(*(av + i) + j);
			k++;
		}
		*(p + k) = '\n';
		k++;
	}
	return (p);
}
