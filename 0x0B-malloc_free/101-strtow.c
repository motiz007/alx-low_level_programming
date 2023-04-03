#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow- splits a string into words
 * @str: the string it recieves
 * Return: pstr
 */
char **strtow(char *str)
{
	int i;
	int len = 0;
	int height = 0;
	int width = 0;
	char *pstr;

	if (str == NULL || str == "")
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != " ")
		{
			len++;
			if (str[i - 1] == " ")
				len++;
		}
	}
	pstr = malloc((len + 1) * (sizeof(char)));
	if (pstr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != " " && str[i + 1] == " ")
			height++;
	}
	height++;
	for (i = 0; i < height; i++)
	{
		while (str[j] != " ")
		{
			pstr[j] = str[j];
			if (str[j + 1] == " ")
				break;
			j++;
		}
		pstr = '\0';
		pstr = '\n';
	}
	return (pstr);
	free(pstr);
}
