/**
 * _strcat - concat two strings
 * @a: array to reverse
 * @n:lenght of array second string
 */
void reverse_array(int *a, int n)
{
	int i;
	char tmp;
	n = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
