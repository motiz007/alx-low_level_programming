#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator- calls a function for each item
 * @array: array with data
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
