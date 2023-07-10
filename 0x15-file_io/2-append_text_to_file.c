#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: file name
 * @text_content: text content to be appended.
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int rwr;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
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
