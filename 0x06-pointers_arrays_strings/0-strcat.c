#include "main.h"
/**
 * _strcat- appends scr to dest string
 * @dest: the string to append to
 * @src: the string to append from
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int len = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len++] = src[j];
	}
	return (dest);
}
