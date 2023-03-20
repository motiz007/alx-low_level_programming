#include <stdio.h>
#include <string.h>
/**
 * main- prints the name of the file it was compiled from, followed by a new line.
 * Return: 0 (success)
 */
#define FILENAME (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
int main(void)
{
	printf(FILENAME);
	printf("\n");
	return (0);
}
