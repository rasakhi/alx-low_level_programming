#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: The name of the file
 * @letters: number of letters printed
 *
 * Return: number of letters printed or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int feed;
	ssize_t num_rd, num_wr;
	char *buff;

	if (!filename)
		return (0);
	feed = open(filename, O_RDONLY);
	if (feed == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	num_rd = read(feed, buff, letters);
	num_wr = write(STDOUT_FILENO, buff, num_rd);
	close(feed);
	free(buff);
	return (num_wr);
}
