#include <stdio.h>

/**
 * main- prints out the alphabet in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	char alpha = 'z';

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
