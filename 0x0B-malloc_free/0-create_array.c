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

	ptr = malloc(size * (sizeof(char)));
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
	free(ptr);
}
