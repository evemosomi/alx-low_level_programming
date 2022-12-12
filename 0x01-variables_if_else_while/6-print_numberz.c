#include <stdio.h>
/**
 * main - Entry
 * Return:0
 */
int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
		putchar((nums % 10) + '0');

	putchar('\n');
	return (0);
}
