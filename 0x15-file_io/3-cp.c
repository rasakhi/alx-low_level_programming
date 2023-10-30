#include "main.h"
#include <stdio.h>

void error_file(int file_from, int file_to, char *argv[]);

/**
 * main - copies content from one file to another
 * @argc: number of arguements
 * @argv: arguement vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t num_of_chars, num_wr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	num_of_chars = 1024;
	while (num_of_chars == 1024)
	{
		num_of_chars = read(file_from, buff, 1024);
		if (num_of_chars == -1)
			error_file(-1, 0, argv);
		num_wr = write(file_to, buff, num_of_chars);
		if (num_wr == -1)
			error_file(0, -1, argv);
	}
	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

/**
 * error_file - checks if files can be opened.
 * @file_from: file to be copied from
 * @file_to: file to be copied to
 * @argv: arguement vector
 * Return: Nothing
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
