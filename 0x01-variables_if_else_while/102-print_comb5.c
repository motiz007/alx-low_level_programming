#include <stdio.h>
/**
 * main- prints two double digit nums
 * Return: 0 (success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				for (num4 = 0 + 1; num4 <= 9; num4++)
				{
					if (((num3 + num4) > (num1 + num2) && num3 >= num1) || num1 < num3)
					{
						putchar('0' + num1);
						putchar('0' + num2);
						putchar(' ');
						putchar('0' + num3);
						putchar('0' + num4);
						if (!(num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
