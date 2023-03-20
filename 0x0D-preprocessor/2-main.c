#include <stdio.h>
#include <string.h>
/**
 * main- prints name of the file, followed by a new line.
 * Return: 0 (success)
 */
#define NAME (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
int main(void)
{
	printf(NAME);
	printf("\n");
	return (0);
}
