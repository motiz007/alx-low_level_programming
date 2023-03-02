#include "main.h"
/**
 * reverse_array- reverses an array of integers
 * @a: the array it recieves
 * @n: the size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int fs;
	int ls;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		fs = a[i];
		ls = a[j];
		a[i] = ls;
		a[j] = fs;
		i++;
		j--;
	}
}
