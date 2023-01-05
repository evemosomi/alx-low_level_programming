#include "main.h"
/**
 * factorial-if n<0 returns error if n>o factorial of n
 * @n:number
 * Return:factorial of a number
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	else
		return (fact);
}
