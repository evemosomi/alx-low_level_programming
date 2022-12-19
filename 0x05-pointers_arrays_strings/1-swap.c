#include "main.h"
/**
 * swap_int - exchnges 2 ints
 * @a:int a
 * @b:int b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
