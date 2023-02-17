#include <stdio.h>

/**
 * main- prints out the alphabet in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
