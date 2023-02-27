#include "main.h"
/**
 * *_strcpy- copies one string into another
 * @src: the string to be copied
 * @dest: the string to be copied to
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
