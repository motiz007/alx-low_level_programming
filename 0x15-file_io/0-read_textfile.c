#include "main.h"

/**
 * read_textfile - prints content of a file
 * @filename: the name of the file
 * @letters: the number of letters to print
 * Return: number of characters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *str;

	if (filename == NULL)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	opn = open(filename, O_RONLY);
	rd = read(opn, str, letters);
	wrt = write(STDOUT_FILENO, str, rd);
	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(str);
		return (0);
	}
	free(str);
	close(opn);
	return (wrt);
}
