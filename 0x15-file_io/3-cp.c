#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define S_E STDERR_FILENO

/**
 * main - the main entry point
 * @argc: the number of arguments
 * @argv: an array of arguments
 * Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	int fd_input, fd_output, you, us, him, her;
	char buf[1024];

	if (argc != 3)
		dprintf(S_E, "Usage: cp file_from file_to\n"), exit(97);

	fd_input = open(argv[1], O_RDONLY);
	if (fd_input == -1)
		dprintf(S_E, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_output = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_output == -1)
		dprintf(S_E, "Error: Can't write to %s\n", argv[2]), exit(99);

	you = read(fd_input, buf, 1024);
	if (you == -1)
		dprintf(S_E, "Error: Can't read from file %s\n", argv[1]), exit(98);

	while (you > 0)
	{
		us = write(fd_output, buf, (ssize_t) you);
		if (us == -1)
		{
			dprintf(S_E, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
		you = read(fd_input, buf, 1024);
	}

	him = close(fd_input);
	if (him == -1)
		dprintf(S_E, "Error: Can't close fd %d\n", fd_input), exit(100);

	her = close(fd_output);
	if (her == -1)
		dprintf(S_E, "Error: Can't close fd %d\n", fd_output), exit(100);

	return (0);
}
