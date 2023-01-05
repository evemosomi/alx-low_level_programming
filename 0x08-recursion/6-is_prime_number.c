#include "main.h"
/**
 * evaluate_num-recursion loop
 * @num:number
 * @counter:number to iterate
 * Return:0 or 1
 */
int evaluate_num(int num, int counter)
{
	if (counter == num - 1)
	{
		return (1);
	}
	else if (num % counter == 0)
	{
		return (0);
	}
	if (num % counter != 0)
	{
		return (evaluate_num(num, counter + 1));
	}
	return (0);
}
/**
 * is_prime_number-checks if prime or not
 * @num:number
 * Return:1 if prime otherwise 0
 */
int is_prime_number(int num)
{
	int counter;

	counter = 2;

	if (num < 2)
	{
		return (0);
	}
	if (num == 2)
	{
		return (1);
	}
	return (evaluate_num(num, counter));
}
