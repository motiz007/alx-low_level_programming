#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array- creates an array of specific chars
 * @size: the size of the array
 * @c: the char to fill it with
 * Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * (sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
	free(ptr);
}
