#include "main.h"

/**
 * create_file - creates a file
 * @filename: The name of the file
 * @text_content: content to be written in the file
 * Return: 1 if successful or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int feed, num_of_letters, wri;

	if (!filename)
		return (-1);
	feed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (feed == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (num_of_letters = 0; text_content[num_of_letters]; num_of_letters++)
		;
	wri = write(feed, text_content, num_of_letters);
	if (wri == -1)
		return (-1);
	close(feed);
	return (1);
}
