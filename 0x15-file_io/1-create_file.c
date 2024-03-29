#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: filename.
 * @text_content: content in the file.
 *
 * Return: 1 success. -1 fails.
 */
int create_file(const char *filename, char *text_content)
{
	int k;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	k = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (k == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(k, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(k);

	return (1);
}
