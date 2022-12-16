#include "main.h"
/**
 * _isupper - uppercase
 * @c:the letter
 * Return:0 otherwise 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
