#include <stdio.h>
/**
 * main- print combo of unique double digit nums
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	int num2;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = num + 1; num2 <= 9; num2++)
		{
			putchar('0' + num);
			putchar('0' + num2);
			if (!(num == 8 && num2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
