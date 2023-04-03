#inlcude "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: char pointer
 * @accept: prefix string
 * Return: Unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned rtt = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			rtt++;
		}
	}
	return (rtt);
}
