#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and prints
 * @filename: file
 * @letters: number of letter
 * Return: number or letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, pe;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	pe = write(STDOUT_FILENO, buf, read(fd, buf, letters));
	if (pe == -1)
		return (0);
	close(fd);
	free(buf);
	return (pe);


}
