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
	int i, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
		if(	cmp(array[i])){

			return (i);
		}
	}
	return (res);
}
