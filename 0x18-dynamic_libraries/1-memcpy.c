#include "main.h"
/**
 * _memcpy- copies n bytes from source to destination
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
