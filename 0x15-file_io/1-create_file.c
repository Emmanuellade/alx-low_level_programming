#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content of file
 *
 * Return: 1 at success. -1 if unsuccessful
*/
int create_file(const char *filename, char *text_content)
{
	int you, us, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	you = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	us = write(you, text_content, len);

	if (you == -1 || us == -1)
		return (-1);

	close(you);

	return (1);
}
