#include "main.h"

/**
 * flip_bits - gets n.o of bits to switch numbers
 * @n: the number to switch
 * @m: the number to get to
 * Return: the number of switches made
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int base = 1;
	int index = 0;
	int bcount = 0;

	while (bcount < 32)
	{
		base = base << index;
		if ((m & base) > 0 && (n & base) == 0)
			count++;
		if ((m & base) == 0 && (n & base) > 1)
			count++;
		base = 1;
		bcount++;
		index++;
	}
	return (count);
}
