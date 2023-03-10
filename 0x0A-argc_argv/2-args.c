#include <stdio.h>
#include "main.h"
/**
 * main-prints out all agruments @on a new line
 * @argc: the argument count
 * @argv: the arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
