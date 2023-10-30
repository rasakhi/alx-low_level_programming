#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file to be appended
 * @text_content: tect to be appended
 * Return: 1 if successful and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fide, num_of_letters, wri;

	if (!filename)
		return (-1);
	fide = open(filename, O_WRONLY | O_APPEND);
	if (fide == -1)
		return (-1);
	if (text_content)
	{
		for (num_of_letters = 0; text_content[num_of_letters]; num_of_letters++)
			;
		wri = write(fide, text_content, num_of_letters);
		if (wri == -1)
			return (-1);
	}
	close(fide);
	return (1);
}
