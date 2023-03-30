/**
 * _reverse_array - reverse an array
 * @a: array to reverse
 * @n: lenght of array second string
 */
void reverse_array(int *a, int n)
{
	int i;
	char tmp;
	
	for (i = 0, n = n - 1; i < n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
