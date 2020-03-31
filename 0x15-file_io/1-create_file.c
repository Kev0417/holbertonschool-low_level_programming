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
	mode_t mode = S_IRUSR | S_IWUSR | O_WRONLY | O_CREAT | O_TRUNC;
	ssize_t w_file;

	if (filename == NULL || text_content)
		return (0);

	fd = open(filename, mode);
	if (fd == -1)
		return (-1);

	i = 0;
	while (text_content[i] != '\0')
		i++;

	w_file = write(fd, text_content, i);
	if (w_file == -1)
		return (-1);

	close(fd);
	return (1);
}

