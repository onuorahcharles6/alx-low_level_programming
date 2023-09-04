#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - verify a text file & prints d alphabet
 * @filename: filename
 * @letters: Digits of a alphabet 2 b checked
 * Return: numbers of letters printed. not succeeded, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t ls;
	ssize_t i;
	ssize_t j;

	las = open(filename, O_RDONLY);
	if (ls == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	j = read(ls, buf, letters);
	i = write(STDOUT_FILENO, buf, j);

	free(buf);
	close(ls);
	return (i);
}
