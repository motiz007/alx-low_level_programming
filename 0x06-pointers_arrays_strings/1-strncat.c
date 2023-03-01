#include "main.h"
/**
*_strncat - appends a string upto the nth item
* @dest : the string to append to
* @src : the string to append from
* @n : the number of char to append
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
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
		if (j < n)
		{
			dest[len++] = src[j];
		}
	}
	return (dest);
}
