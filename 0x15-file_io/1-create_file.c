#include "main.h"

/**
 * create_file - creates a file and writes to it
 * @filename: the name of the file
 * @text_content: the string to write
 * Return: 1 success, -1 fail
 */

int create_file(const char *filename, char *text_content)
{
	int opn, wrt;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, len);
	if (opn == -1 || wrt == -1)
		return (-1);
	close(opn);
	return (1);
}
