#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - verify a text file & prints d alphabet
 * @filename: shows filename
 * @letters: Digits of a alphabet 2 b checked
 * Return: numbers of letters printed. not succeeded, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t las;
	ssize_t mi;
	ssize_t j;

	las = open(filename, O_RDONLY);
	if (las == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	j = read(la, buf, letters);
	mi = write(STDOUT_FILENO, buf, j);

	free(buf);
	close(las);
	return (mi);
}
