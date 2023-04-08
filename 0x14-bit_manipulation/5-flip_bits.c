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
	int bcount = 0;

	while (bcount < 32)
	{
		if ((m & base) != (n & base))
			count++;
		n = n >> 1;
		m = m >> 1;
		bcount++;
	}
	return (count);
}
