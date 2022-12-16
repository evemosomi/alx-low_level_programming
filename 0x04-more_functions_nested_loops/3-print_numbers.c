#include "main.h"
/**
 * print_numbers - numbers 1-9
 * Return:void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c < 10; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
