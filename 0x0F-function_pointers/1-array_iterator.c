#include "function_pointers.h"
/**
 * array_iterator -fn
 * @array:array
 * @size:size
 * @action:pointer fn
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
