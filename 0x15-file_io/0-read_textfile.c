#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads textfiles
 * @letters: the letters
 * @filename: the name of the file
 *
 * Return: printed letters. if unsuccessful, return 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t you;
	ssize_t me;
	ssize_t us;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	you = open(filename, O_RDONLY);
	me = read(you, buf, letters);
	us = write(STDOUT_FILENO, buf, me);

	if (you == -1 || me == -1 || us == -1 || us != me)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(you);
	return (us);
}
