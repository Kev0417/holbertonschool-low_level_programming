#include "holberton.h"

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: name of file
 * @text_content: string to add to end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	mode_t mode = O_APPEND | O_WRONLY;
	ssize_t w_file;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		fd = open(filename, mode);
		if (fd == -1)
			return (-1);

		i = 0;
		while (text_content[i] != '\0')
			i++;

		w_file = write(fd, text_content, i);
		if (w_file == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
