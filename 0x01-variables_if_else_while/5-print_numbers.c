#include <stdio.h>
/**
 * main- prints decimals 0-9
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
