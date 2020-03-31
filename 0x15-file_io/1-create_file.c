#include "holberton.h"

/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	mode_t mode = O_CREAT | O_WRONLY | O_TRUNC;
	mode_t chmod = S_IRUSR | S_IWUSR;
	ssize_t w_file;

	if (filename == NULL)
		return (0);

	fd = open(filename, mode, chmod);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
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

