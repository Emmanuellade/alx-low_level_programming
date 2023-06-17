#include "main.h"
/**
 * append_text_to_file -it appends texts at the end of a file.
 * @filename: the filename
 * @text_content: end of the file string
 *
 * Return: if the function fails or filename is NULL - -1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int you, us, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	you = open(filename, O_WRONLY | O_APPEND);
	us = write(you, text_content, len);

	if (you == -1 || us == -1)
		return (-1);

	close(you);

	return (1);
}
