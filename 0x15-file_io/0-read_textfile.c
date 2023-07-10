#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: file name
 * @Letters: number of letters to be printed
 *
 * Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *str;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	str = malloc(letters * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (0);
	}
	nrd = read(fd, str, letters);
	nwr = write(STDOUT_FILENO, str, nrd);
	close(fd);
	free(str);
	return (nwr);
}
