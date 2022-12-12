#include <stdio.h>
/**
 * main - Entry
 * Return
 */
int main(void)
{
	char rc;

	for (rc = 'z'; rc >= 'a'; rc--)
		putchar(rc);

	putchar('\n');
	return (0);
}
