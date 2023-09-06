#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file name to create
 * @text_content: string to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd, pe, i;
	char *buf;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	buf = malloc(i * sizeof(char));
	if (buf == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	pe = write(fd, text_content, i);
	if (pe == -1)
		return (-1);
	close(fd);
	free(buf);
	return (1);
}
