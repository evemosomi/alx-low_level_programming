#include "main.h"
/**
 * _strlen - counts
 * @s:elements
 * Return:1
 */
int _strlen(char s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copies
 * @src:elements
 * @dest:dest
 * Return:dest
 */
char *_strcpy(char *dest, char src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * _strdup - string
 * @str:elements
 * Return:pointer
 */
char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

if (str == 0)
{
	return (NULL);
}
size = _strlen(str) + 1;
dst = (char *) malloc(size *sizeof(char));
if (dst == 0)
{
	return (NULL);
}
_strcpy(dst, str);
return (dst);
}
