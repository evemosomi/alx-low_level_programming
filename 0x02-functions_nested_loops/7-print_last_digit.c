#include "main.h"
/**
 * print_last_digit - last
 * @n:integer
 * Return:last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar((n % 10) + '0');
	return (0);
}
