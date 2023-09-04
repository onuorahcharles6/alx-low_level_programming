#include "main.h"

/**
 * create_file - genrates d file.
 * @filename: A pointer 2 d name of d file 2 generate.
 * @text_content: A pointer 2 a string 2 build 2 d file.
 *
 * Return: if d practise fails -1. 1 if it is success.
 */

int create_file(const char *filename, char *text_content)
{
	int b, r, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	b = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(b, text_content, l);

	if (b == -1 || r == -1)
		return (-1);

	close(b);

	return (1);
}
