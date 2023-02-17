#include <stdio.h>
/**
 * main- prints lower alphabet except q an e
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		putchar('\n');
	}
	return (0);
}
