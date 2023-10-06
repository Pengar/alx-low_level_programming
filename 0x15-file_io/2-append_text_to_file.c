#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename.
 * @text_content: content.
 *
 * Return: 1 if exists. -1 if the fails does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	k = open(filename, O_WRONLY | O_APPEND);

	if (k == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(k, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(k);

	return (1);
}
