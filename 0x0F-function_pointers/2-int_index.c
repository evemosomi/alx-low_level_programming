#include "function_pointers.h"
/**
 * int_index -searches
 * @array:array
 * @size:size
 * @cmp:pointer
 * Return:index or 1 else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0)
					return (i);
			}
		}
	return (-1);
	}
