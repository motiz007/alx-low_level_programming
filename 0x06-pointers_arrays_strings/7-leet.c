#include "main.h"
/**
 * leet- changes some letters to number
 * @s: the string it recieves
 * Return: s
 */
char *leet(char *s)
{
	int i, j, k;
	char r[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; r[j] != '\0'; j++)
		{
			if (s[i] == r[j])
			{
				k = j;
				s[i] = n[k];
			}
		}
	}
	return (s);
}
