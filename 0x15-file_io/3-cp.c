#include "holberton.h"

/**
 * main - create the copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 */
int main(int ac, char *av[])
{
	int f_from, f_to, ctrl_c, ctrl_v;
	char buffer[1024];
	mode_t chmod = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	f_from = open(av[1], O_RDONLY);
	if (f_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	f_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, chmod);
	if (f_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	ctrl_c = read(f_from, buffer, 1024);
	if (ctrl_c == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	ctrl_v = write(f_to, buffer, ctrl_c);
	if (ctrl_v == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	close (f_from);
	close (f_to);
	return (0);
}

