#include "main.h"
/**
 * _memset-block of memory
 * @s:address
 * @b:value
 * @n:number
 * Return:array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
