#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: 0 on success, -1 on failure
 */
int main(int argc, char **argv)
{
	int filefrom, fileto, error;
	ssize_t nchars, nwr;
	char str[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp filefrom fileto");
		exit(97);
	}
	filefrom = open(argv[1], O_RDONLY);
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (filefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(filefrom, str, 1024);
		if (nchars == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		nwr = write(fileto, str, nchars);
		if (nwr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	error = close(filefrom);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	error = close(fileto);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}
	return (0);

}
