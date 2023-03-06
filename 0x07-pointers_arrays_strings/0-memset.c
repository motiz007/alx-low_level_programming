#include "main.h"
/**
 * _memset- sets the first n bites of input to a const value
 * @s: the string to be modified
 * @b: the const used to fill
 * @n: the number of bytes to fill
 * Return: s (the modified string)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
