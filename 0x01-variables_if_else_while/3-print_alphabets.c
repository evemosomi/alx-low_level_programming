#include <stdio.h>
/**
 * main - Case change
 * Return:0
 */
int main(void)
{
	char cg;

for (cg = 'a'; cg <= 'z'; cg++)
	putchar(cg);

for (cg = 'A'; cg <= 'Z'; cg++)
	putchar(cg);

putchar('\n');
return (0);
}
