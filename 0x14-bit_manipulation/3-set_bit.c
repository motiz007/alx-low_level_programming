#include "main.h"

/**
 * set_bit - sets the value of nth bit to 1
 * @n: the number to convert
 * @index: the position to set
 * Return: 1 (success), -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	long unsigned int base = 1;
	long unsigned int num;

	num = *n;
	base = base << index;
	if (index > 32)
		return (-1);
	num = num | base;
	*n = num;
	return (1);
}
