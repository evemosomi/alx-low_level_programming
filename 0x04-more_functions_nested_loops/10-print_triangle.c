#include "main.h"
/**
 * print_traingle -prints a triangle
 * @size:number of lines
 */
void print_triangle(int size)
{
	int k, l;

	for (k = 0; k < size; k++)
	{
		for (l = 1; l < (size - k); l++)
			_putchar(' ');
		for (l--; l < size; l++)
			_putchar(35);
		if (k < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
