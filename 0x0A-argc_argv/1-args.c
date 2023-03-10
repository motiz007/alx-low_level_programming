#include <stdio.h>
#include "main.h"
/**
 * main- prints number of arguments
 * @argc: contains number of arguments
 * @argv: contains arguments as strings
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
