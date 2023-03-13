#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup-  duplicates string input to memory with malloc
 * @str: the string it recieves
 * Return: pstr
 */
char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *pstr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	pstr = malloc(len * (sizeof(char)));
	if (pstr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		pstr[i] = str[i];
	return (pstr);
	free(pstr);
}
