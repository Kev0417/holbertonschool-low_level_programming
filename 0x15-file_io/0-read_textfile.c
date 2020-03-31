#include "holberton.h"

/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t r_str;
	ssize_t w_str;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	r_str = read(fd, buffer, letters);
	if (r_str == -1)
		return (0);

	w_str = write(STDOUT_FILENO, buffer, r_str);
	if (w_str == -1)
		return (0);

	close(fd);
	return (w_str);
}

