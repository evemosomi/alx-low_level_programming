#include "main.h"
/**
 * _memcpy - copies
 * @dest:dest
 * @src:source
 * @n:number
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
