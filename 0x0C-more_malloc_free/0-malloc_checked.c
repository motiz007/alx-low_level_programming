#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked- allocates memory and normal terminates
 * @b: the amount to be assigned
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
