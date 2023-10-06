#include "main.h"

/**
 * read_textfile - function that reads file and prints the letter
 * @filename: filename.
 * @letters: numbers of letters.
 *
 * Return: If fails returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int k;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	k = open(filename, O_RDONLY);

	if (k == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(k, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(k);

	free(buf);

	return (nwr);
}
