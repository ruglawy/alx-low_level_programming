#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: text to be inserted into the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters = 0;
	int rwr;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[letters] != '\0')
	{
		letters++;
	}
	rwr = write(fd, text_content, letters);
	if (rwr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
