#include "main.h"
/**
 * times_table - prints 9 times
 */
void times_table(void)
{
	int num, m, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * m;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0);
		}
		_putchar('\n');
	}
}
