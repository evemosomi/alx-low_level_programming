#include "main.h"
/**
 *_islower - check if is in lower case
 *@c:is a character to be checked
 * Return:1 otherwise 0
 */
int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
