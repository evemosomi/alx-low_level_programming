#include "main.h"
/**
 * reverse_array - reverses numbers
 * @a:array
 * @n:number of elements
 * Return:reversed values
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
