#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tirzah;
	ssize_t fd;
	ssize_t y;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	tirzah = malloc(sizeof(char) * letters);
	t = read(fd, tirzah, letters);
	y = write(STDOUT_FILENO, tirzah, t);

	free(tirzah);
	close(fd);
	return (y);
}
