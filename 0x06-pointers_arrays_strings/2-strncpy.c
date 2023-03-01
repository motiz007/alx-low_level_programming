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
	int i, j;
	int len = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
