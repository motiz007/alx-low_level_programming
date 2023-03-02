#include "main.h"
/**
 * _strncpy- copies n items to another string
 * @src: string to copy from
 * @dest: string to copy to
 * @n: number of items to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
