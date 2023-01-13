#include "main.h"
/**
 * create_array - prints a string
 * @size:elements
 * @c:char
 * Return:pointer
 */
char *create_array(unsigned int size, char c)
{
	char *buff;
	unsigned int pstn;

	buff = malloc(sizeof(char) * size);
	if (size == 0 || buff == NULL)
		return (NULL);
	for (pstn = 0; pstn < size; pstn++)
		buff[pstn] = c;
		return (buff);
}
