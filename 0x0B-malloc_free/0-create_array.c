#include "main.h"
/**
 * create_array - prints a string
 * @size:elements
 * @c:char
 * Return:pointer
 */
char *create_array(unsigned int size, char c)
{
	char buff;
	unsigned int pstn;

	if (size == 0)
	{
		return (NULL);
	}

	buff = (char *) malloc(size * sizeof(c));

	if (buff == 0)
	{
		return (NULL);
	}
	else
	{
		pstn = 0;
		while (pstn < size)
		{
			*(buff + pstn) = c;
			pstn++;
		}
		return (buff);
	}
}
