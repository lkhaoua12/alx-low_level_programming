/**
 * _strcmp - concat two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if succes;
 */
int _strcmp(char *s1, char *s2)
{
	int value = 0;
	
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			value = ((int)*s1 - 48) - ((int)*s2 - 48); 
		}
		break;
		s1++;
		s2++;
	}
	return (value);
}
