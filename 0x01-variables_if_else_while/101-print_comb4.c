#include <stdio.h>
/**
 * main- print combo of unique triple digits nums
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = num + 1; num2 <= 9; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num3++)
			{
				putchar('0' + num);
				putchar('0' + num2);
				putchar('0' + num3);
				if (!(num == 7 && num2 == 8 && num3 == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
