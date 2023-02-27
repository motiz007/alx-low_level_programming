#include "main.h"
/**
 * swap_int- swaps values of two integers
 * @a: value it recievies
 * @b: value it revieves
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
