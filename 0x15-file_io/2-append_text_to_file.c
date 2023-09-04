#include "main.h"

/**
 * append_text_to_file - attach text @ d end of d file
 * @filename: A pointer 2 d name of d file
 * @text_content: d string 2 sum 2 d end of d file.
 *
 * Return: 1 if d file exists. -1 if d file doesn't exist or if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int b, r, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	b = open(filename, O_WRONLY | O_APPEND);
	r = write(b, text_content, l);

	if (b == -1 || r == -1)
		return (-1);

	close(b);

	return (1);
}
